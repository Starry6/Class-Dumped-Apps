@interface NSNotificationListener : NSObject
- (void)registerObserver;
- (id)initWithCB:;
- (void)unregisterObserver;
- (void)applicationWillResignActive:;
- (void)applicationDidBecomeActive:;
- (void)applicationDidEnterBackground:;
- (void)applicationWillEnterForeground:;
@end
