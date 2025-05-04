@interface AWEExitAppMonitor : NSObject
- (void)addNotification;
- (BOOL)mobFeedEnterBackground;
- (id)init;
- (void)dealloc;
- (void)applicationDidEnterBackground;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
