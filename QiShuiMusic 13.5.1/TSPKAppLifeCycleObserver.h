@interface TSPKAppLifeCycleObserver : NSObject
@property (nonatomic) BOOL isBackground;
@property (nonatomic) double timeLastDidEnterBackground;
- (BOOL)isAppBackground;
- (void)addNotifications;
- (double)getTimeLastDidEnterBackground;
- (void)handlePageDeallocNotification:;
- (void)handlePageStatusChangeNotification:;
- (void)setTimeLastDidEnterBackground:;
- (double)timeLastDidEnterBackground;
- (BOOL)isBackground;
- (id)init;
- (void)applicationWillEnterForeground;
- (void)applicationDidBecomeActive;
- (void)setIsBackground:;
- (void)applicationDidReceiveMemoryWarning;
- (void)setup;
- (void)applicationDidEnterBackground;
- (void)applicationWillTerminate;
- (void)applicationWillResignActive;
+ (id)sharedObserver;
@end
