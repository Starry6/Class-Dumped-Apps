@interface AXNotificationObserver : NSObject
@property (nonatomic) NSArray notifications;
@property (nonatomic) <AXNotificationObserverDelegate> delegate;
- (id)notifications;
- (void)dealloc;
- (void)setNotifications:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithNotifications:;
- (void)_registerForAXNotifications:;
- (void)_didObserveNotification:notificationData:;
@end
