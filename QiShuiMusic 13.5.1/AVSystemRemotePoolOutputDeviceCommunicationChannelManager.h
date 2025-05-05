@interface AVSystemRemotePoolOutputDeviceCommunicationChannelManager : NSObject
@property (nonatomic) AVOutputDevice parentOutputDevice;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_initializeIfNeededAndGetSystemRemotePool;
- (id)parentOutputDevice;
- (void)dealloc;
- (id)initWithDeviceID:;
- (void)_didReceiveData:fromDeviceWithID:fromChannelWithUUID:;
- (void).cxx_destruct;
- (void)_didCloseCommChannelWithUUID:forDeviceWithID:;
- (void)openCommunicationChannelWithOptions:completionHandler:;
- (void)setParentOutputDevice:;
+ (id)sharedSystemRemotePoolImpl;
+ (id)sharedSystemRemotePool;
@end
