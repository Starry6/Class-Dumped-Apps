@interface AWEOpenPlatformScanRouter : NSObject
+ (void)showToastWithText:;
+ (void)actionOpenplatformURL:;
+ (BOOL)canJumpToThirdApp:;
+ (void)reportScanResultWithURL:withScopes:succeed:;
+ (void)jumpToThirdApp:Target:downloadURL:withCompletion:;
@end
