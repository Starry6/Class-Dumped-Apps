@interface ABUAdapterManager : NSObject
+ (id)didSetupConfigs;
+ (id)adAdapterWithMediationSlotConfig:andMediaSlotConfig:;
+ (void)addIsCustomAdapter:toAdapter:;
+ (id)customConfigAdapterWithServerKey:;
+ (void)enumerateServerKeyAndAdapterUsingBlock:;
+ (void)sendPrivacyConfigRequestToAdapters:;
+ (void)sendUserConfigRequestToAdapters:;
+ (void)setBridge:forAdAdapter:;
+ (void)setConfigAdapter:forAdAdapter:;
+ (void)setMediaSlotConfig:forAdAdapter:;
+ (id)setupAdapterWithConfig:andPrivacyConfig:;
@end
