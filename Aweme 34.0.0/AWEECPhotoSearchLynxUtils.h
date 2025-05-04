@interface AWEECPhotoSearchLynxUtils : NSObject
+ (id)abPreloadConfig;
+ (id)settingsPreloadConfig;
+ (BOOL)headerLynxPreloadEnable;
+ (id)headerLynxPreloadABConfig;
+ (id)headerLynxPreloadSettingsConfig;
+ (id)cellConfigsWithEntrance:abConfig:settings:;
+ (id)p_schemaConfigKey:;
+ (id)cellConfigsWithEntrance:preloadConfig:;
+ (id)preCreateViewModelsWithSearchEntrance:cachalotContext:;
+ (id)preloadHeaderLynxWithEntrance:;
+ (id)patchModelWithConfig:;
+ (id)lynxCardPreloadModelsWithEntrance:;
+ (BOOL)enableLynxEstimateHeight;
+ (long long)lynxEstimateHeightForSchema:;
+ (double)lynxEstimateHeightUpdateMaxDelay;
+ (double)lynxEstimateHeightUpdateAfterDelay;
@end
