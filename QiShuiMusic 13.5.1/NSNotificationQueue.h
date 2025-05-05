@interface NSNotificationQueue : NSObject
- (id)init;
- (void)dealloc;
- (void)enqueueNotification:postingStyle:;
- (void)_flushNotificationQueue;
- (void)dequeueNotificationsMatching:coalesceMask:;
- (void)enqueueNotification:postingStyle:coalesceMask:forModes:;
- (id)initWithNotificationCenter:;
+ (id)defaultQueue;
@end
