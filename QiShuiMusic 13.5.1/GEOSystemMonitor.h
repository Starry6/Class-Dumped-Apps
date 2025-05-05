@interface GEOSystemMonitor : NSObject
- (id)init;
- (void)dealloc;
- (void)removeSystemSleepObserver:;
- (BOOL)isBackgroundAppRefreshEnabledForBundleIdentifier:isDisabledGlobally:;
- (void).cxx_destruct;
- (void)addSystemSleepObserver:queue:;
+ (id)sharedInstance;
@end
