@interface SGPreferenceManager : NSObject
- (id)init;
- (void)_resumeNotificationQueue;
- (void).cxx_destruct;
- (void)_suspendNotificationQueue;
- (int)registerBlock:;
+ (id)defaultManager;
@end
