@interface SGNotificationListener : NSObject
- (void)dealloc;
- (id)initWithNotification:callback:;
- (void).cxx_destruct;
- (void)_notify;
- (BOOL)unsubscribe;
@end
