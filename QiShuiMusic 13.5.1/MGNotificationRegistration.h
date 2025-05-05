@interface MGNotificationRegistration : NSObject
- (void)cancel;
- (void)dealloc;
- (id)initWithQueue:block:;
- (BOOL)start;
- (BOOL)registerForNotification:argument:question:;
@end
