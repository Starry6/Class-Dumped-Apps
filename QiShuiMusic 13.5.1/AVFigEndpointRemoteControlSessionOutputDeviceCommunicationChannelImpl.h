@interface AVFigEndpointRemoteControlSessionOutputDeviceCommunicationChannelImpl : NSObject
@property (nonatomic) AVOutputDeviceCommunicationChannel parentChannel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_didReceiveData:;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (void)sendData:completionHandler:;
- (id)parentChannel;
- (void)setParentChannel:;
- (id)initWithRemoteControlSession:;
- (void)_didCloseCommunicationChannel;
@end
