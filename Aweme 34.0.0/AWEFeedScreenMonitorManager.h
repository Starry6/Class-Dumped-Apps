@interface AWEFeedScreenMonitorManager : NSObject
- (void)startMonitorScreenIfNeeded;
- (void)realStartMonitorScreen;
- (id)takeScreenshotWithScale:;
- (BOOL)isScreenBlackWithImage:threshold:blockSize:;
- (BOOL)isPixelDark:threshold:;
+ (double)screenScaleForCapture;
+ (double)thresholdRatioOfPixelCount;
+ (long long)reportUITreeType;
+ (double)thresholdOfDark;
+ (id)darkScreenMonitorConfig;
+ (BOOL)enable;
+ (id)sharedInstance;
+ (long long)blockSize;
+ (double)delaySeconds;
@end
