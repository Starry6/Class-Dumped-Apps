@interface AVOutputDeviceCommunicationChannel : NSObject
@property (nonatomic) <AVOutputDeviceCommunicationChannelDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (void)close;
- (id)delegate;
- (void).cxx_destruct;
- (void)sendData:completionHandler:;
- (id)initWithOutputDeviceCommunicationChannelImpl:;
- (void)communicationChannelImpl:didReceiveData:;
- (void)communicationChannelImplDidClose:;
@end
