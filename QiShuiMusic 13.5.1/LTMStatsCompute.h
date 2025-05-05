@interface LTMStatsCompute : NSObject
- (void)dealloc;
- (int)allocateResources;
- (void).cxx_destruct;
- (int)purgeResources;
- (id)initWithMetalContext:;
- (int)prewarmShaders;
- (int)createShaders:;
- (int)encodeLTMStatisticsCalculationOptimized:params:globalHistogram:localHistogram:thumbnail:;
- (int)encodeLTMStatisticsCalculationPrecise:paramsGlobalHist:globalHistogram:localHistogram:thumbnail:;
- (void)computeInputParametersForImageWidth:calcGlobalHistOnROI:with:to:;
- (float)calcExposureRatio:;
@end
