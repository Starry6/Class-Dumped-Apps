@interface WBSDistributedNotificationObserver : NSObject
@property (nonatomic) @? notificationHandler;
@property (nonatomic) @? timeoutHandler;
- (void)_startObserving;
- (id)init;
- (id)timeoutHandler;
- (void)_stopObserving;
- (void)setNotificationHandler:;
- (void).cxx_destruct;
- (void)setTimeoutHandler:;
- (id)initWithNotificationName:;
- (void)waitWithTimeout:;
- (void)_didReceiveNotification:;
- (id)initWithNotificationName:type:;
- (id)notificationHandler;
- (void)stopWaiting;
- (void)_scheduleTimeoutTimerWithTimeout:;
- (void)_invalidateTimeoutTimer;
- (void)_didTimeOut;
@end
