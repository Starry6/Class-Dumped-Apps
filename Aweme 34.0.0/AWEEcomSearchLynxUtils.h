@interface AWEEcomSearchLynxUtils : NSObject
+ (BOOL)isGeckoSearchDynamicWithScene:;
+ (id)progressSearchDynamic:schema:searchScene:;
+ (void)trackLynxLoadInfoWithModel:searchScene:;
+ (id)schemaConfigKey:;
+ (BOOL)isLynxPreprocessOptimize;
+ (BOOL)isChunkAwemeMiniPack;
+ (BOOL)shouldUseAnnieXWithSrc:dynamicPatch:;
+ (id)lynxCardPreloadModels:enterFrom:;
+ (id)ecSearchLynxCDNMaxDownloadTimeout;
+ (id)ecSearchLynxSkipCDNChannels;
+ (void)prepareEstimatedHeight:;
+ (id)ecSearchLynxSkipVerifyChannels;
+ (long long)lynxCardReuseMethod:;
+ (id)getTabPreloadConfig:enterFrom:;
+ (id)lynxCardEstimateHeightConfig;
+ (id)lynxCardReuseConfig;
+ (void)trackLynxLoadInfoWithSchema:localGeckoVersion:searchScene:callback:;
+ (id)progressSearchDynamicWithSchema:useSurl:searchScene:callback:;
+ (void)geckoResourcePreloadForTab:;
+ (BOOL)isGoodsCardLynx;
+ (void)trackPreload:searchInfoDict:isFirstScreen:;
+ (double)lynxUpdateLayoutAfterDelay;
+ (double)lynxUpdateLayoutMaxDelay;
@end
