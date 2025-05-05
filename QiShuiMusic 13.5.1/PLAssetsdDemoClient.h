@interface PLAssetsdDemoClient : PLAssetsdBaseClient
- (void)cleanupForStoreDemoModeWithCompletion:;
- (BOOL)cleanupForStoreDemoMode:;
- (BOOL)hasCompletedRestorePostProcessing:error:;
- (BOOL)hasCompletedMomentAnalysis:error:;
@end
