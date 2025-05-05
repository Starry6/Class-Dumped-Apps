@interface LSRTMPReconnectAppNotificationObserver : NSObject
@property (nonatomic) @? notificationBlock;
- (void)p_notification:;
- (void)p_notificationOnMainQueue:;
- (id)init;
- (void)dealloc;
- (id)notificationBlock;
- (void).cxx_destruct;
- (void)setNotificationBlock:;
@end
