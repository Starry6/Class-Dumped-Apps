@interface IMNotificationCenterEventListener : IMEventListener
@property (nonatomic) NSString registeredNotificationName;
@property (nonatomic) BOOL isRegisteredForNotification;
@property (nonatomic) NSString notificationName;
@property (nonatomic) @ notificationObject;
- (id)notificationName;
- (void)dealloc;
- (BOOL)isListening;
- (void).cxx_destruct;
- (id)notificationObject;
- (void)_notification:;
- (void)willStartListening;
- (void)willStopListening;
- (void)willReset;
- (BOOL)isRegisteredForNotification;
- (void)registerForNotificationName:;
- (void)registerForNotificationName:object:;
- (id)registeredNotificationName;
+ (id)eventListenerForNotificationName:;
+ (id)eventListenerForNotificationName:object:;
@end
