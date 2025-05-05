@interface HMDCrashDynamicDataProvider : NSObject
- (void)applicationStateChanged:;
- (void)networkAccessChanged:;
- (void)networkQualityDidChanged:;
- (void)refreshCustomContext;
- (void)refreshFilters;
- (void)requestRefreshCustomContext;
- (void)requestRefreshFilters;
- (void)sceneDidUpdate;
- (id)init;
- (void)dealloc;
- (void)removeObserver;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)setup;
- (void)applicationWillTerminate;
@end
