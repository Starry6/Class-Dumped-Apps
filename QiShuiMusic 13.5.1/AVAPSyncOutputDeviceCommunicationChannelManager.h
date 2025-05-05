@interface AVAPSyncOutputDeviceCommunicationChannelManager : NSObject
@property (nonatomic) AVOutputDevice parentOutputDevice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)parentOutputDevice;
- (void)dealloc;
- (void)_didReceiveData:fromDeviceWithID:fromChannelWithUUID:;
- (void).cxx_destruct;
- (void)_didCloseCommChannelWithUUID:forDeviceWithID:;
- (void)openCommunicationChannelWithOptions:completionHandler:;
- (void)setParentOutputDevice:;
- (id)initWithDeviceID:syncController:;
- (void)_saveCommChannel:forUUID:;
@end
