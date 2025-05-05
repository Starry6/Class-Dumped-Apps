@interface PLChangeHandlingNotificationObserver : NSObject
@property (nonatomic) NSInteger notifyTokenLow;
@property (nonatomic) NSInteger notifyTokenHigh;
@property (nonatomic) @? notificationBlock;
- (void)_inq_handleHighPriorityNotification;
- (void)dealloc;
- (BOOL)stopObservingRemoteNotifications;
- (id)initWithLowPriorityThrottleInterval:targetWorkloop:;
- (int)notifyTokenHigh;
- (id)notificationBlock;
- (void).cxx_destruct;
- (int)notifyTokenLow;
- (void)startObservingRemoteNotificationsWithBlock:;
- (void)_inq_handleLowPriorityNotification;
- (void)_inq_handleThrottleTimer;
- (void)_locked_startObservingRemoteNotificationsWithBlock:;
- (BOOL)_locked_stopObservingRemoteNotifications;
- (void)_inq_suspendIfThrottling;
@end
