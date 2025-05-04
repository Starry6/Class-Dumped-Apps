@interface AWEAIPropTaskMessenger : NSObject
@property (nonatomic) ACCCameraSubscription subscription;
- (void)sendTaskStatusDidUpdateMessage;
- (void)sendFinishTaskMessageWithTaskId:isSucceeded:;
- (id)subscription;
- (void)setSubscription:;
- (void).cxx_destruct;
- (void)addSubscriber:;
@end
