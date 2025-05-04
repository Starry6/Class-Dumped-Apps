@interface AWEBDSimPlayerBizVideoSRConfig : BDSimPlayerBizVideoSRConfig
- (BOOL)isNakedEye3DVideo:;
- (BOOL)isTeenModeEnabled;
- (id)csrLutImage;
- (id)csrHDRLutImage;
- (double)csrLutValue;
- (BOOL)isABOpenCsrLut;
- (long long)cpuLevel;
- (BOOL)thermalMitigationSRisValid;
- (BOOL)enableStrategyAlgoSuperResolution;
- (long long)getPlayerIntSRExtraMode;
- (id)bmfFlexSRStrategyConfig;
- (id)bmfSharpStrategyConfig;
- (id)open1080SrFilterConfig;
- (BOOL)reSuperResolutionNunki;
- (BOOL)cancelPreloadUseMaxBitrate;
- (BOOL)cancelPreloadUseH265;
- (BOOL)enableDowngradeSRAvoid2k4k;
- (void)commerceLog:;
- (id)videoQualityMap;
- (long long)bMFProcessExtraParamterSharpeLevel;
- (void)setThermalSevereDegradeSrWithModel:;
+ (id)sharedInstance;
@end
