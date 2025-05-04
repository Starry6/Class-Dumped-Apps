@interface AWENotificationCenterHelper : NSObject
@property (nonatomic) @? receivedBlock;
- (void)receiveNotification:;
- (id)receivedBlock;
- (void)observeNotifcationName:;
- (void)setReceivedBlock:;
- (void)dealloc;
- (void).cxx_destruct;
@end
