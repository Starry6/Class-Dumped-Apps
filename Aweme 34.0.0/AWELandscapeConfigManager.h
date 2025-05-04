@interface AWELandscapeConfigManager : NSObject
- (id)init;
- (void).cxx_destruct;
+ (BOOL)optimizeSplitScreen;
+ (BOOL)fixFirstVideoDoNotReportVideoPlay;
+ (BOOL)delayBeginMonitor;
+ (BOOL)updateEntryViewWhenAppear;
+ (BOOL)optimizeProgressSlider;
+ (BOOL)morePanelBigFontAdaptEnabled;
+ (BOOL)funcOptimizeV1Enabled;
+ (void)setFuncOptimizeV1Enabled:;
+ (BOOL)funcOptimizeV2Enabled;
+ (void)setFuncOptimizeV2Enabled:;
+ (BOOL)funcOptimizeV3Enabled;
+ (void)setFuncOptimizeV3Enabled:;
+ (BOOL)splitScreenLazyLoad;
+ (void)setSplitScreenLazyLoad:;
+ (BOOL)useNewTransition;
+ (void)setUseNewTransition:;
@end
