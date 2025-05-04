@interface AWETeenBDSimPlayerBizVideoSRConfig : BDSimPlayerBizVideoSRConfig
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
+ (id)sharedInstance;
@end
