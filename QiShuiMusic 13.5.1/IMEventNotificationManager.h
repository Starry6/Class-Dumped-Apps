@interface IMEventNotificationManager : NSObject
@property (nonatomic) IMAutomaticEventNotificationQueue notificationQueue;
@property (nonatomic) IMEventListenerList eventListeners;
@property (nonatomic) NSMutableArray registeredNotificationQueues;
@property (nonatomic) q busyCount;
@property (nonatomic) double eventTimeout;
@property (nonatomic) BOOL busy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (BOOL)isBusy;
- (long long)busyCount;
- (void)registerEventListener:;
- (id)notificationQueue;
- (void)setBusyCount:;
- (void).cxx_destruct;
- (void)eventNotificationQueue:didChangeBusyState:;
- (void)registerNotificationQueue:;
- (void)eventListenerDidFinish:;
- (id)createEventListenerForNotificationName:object:;
- (void)cancelEventNotificationsForEventHandler:;
- (void)cancelAllEventNotifications;
- (void)pauseEventNotifications:;
- (void)pushNotificationForEventHandler:eventNotificationBlock:;
- (void)appendNotificationForEventHandler:eventNotificationBlock:;
- (void)pushNotificationForEventHandler:sender:eventNotificationBlock:;
- (void)appendNotificationForEventHandler:sender:eventNotificationBlock:;
- (double)eventTimeout;
- (void)setEventTimeout:;
- (id)eventListeners;
- (id)registeredNotificationQueues;
@end
