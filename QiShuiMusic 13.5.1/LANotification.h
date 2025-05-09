@interface LANotification : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) <LANotificationXPC> notification;
@property (nonatomic) LANotificationProxy proxy;
@property (nonatomic) NSObject<LANotificationObserver> observer;
@property (nonatomic) BOOL notifyOnResume;
@property (nonatomic) BOOL appMustBeActive;
@property (nonatomic) NSObject value;
@property (nonatomic) NSObject oldValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)proxy;
- (id)notification;
- (void)suspend;
- (void)resume;
- (id)initWithObserver:;
- (void)setObserver:;
- (id)connection;
- (void).cxx_destruct;
- (id)description;
- (id)value;
- (id)oldValue;
- (id)observer;
- (void)newValue:oldValue:completionHandler:;
- (void)_appActivityChanged:;
- (void)postNewValue:oldValue:;
- (void)_notifyObserverWithAction:completionHandler:;
- (id)darwinNotificationForValue:;
- (BOOL)appMustBeActive;
- (void)setAppMustBeActive:;
- (void)_observeAppActivity:;
- (id)_notificationNameWhenAppIsActive:;
- (void)_checkWaiting;
- (BOOL)notifyOnResume;
- (void)setNotifyOnResume:;
+ (BOOL)isAppActive;
+ (void)postNotificationWithNewValue:oldValue:;
@end
