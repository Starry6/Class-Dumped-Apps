@interface IESECTabKitABTestHelper : NSObject
+ (id)BDXWebViewWarmupConfig;
+ (BOOL)enableBDXWebViewWarmup;
+ (long long)enableFeature:routerParams:bizTag:;
+ (BOOL)enableGlobalPreProcess;
+ (BOOL)enableTabKitFPSMonitor;
+ (BOOL)enableTabkitForBrandMall;
+ (BOOL)enableUrlPreDecode;
+ (double)mallWarmupInterval;
+ (id)p_bizConfigForFeature:bizTag:;
+ (id)p_globalConfigForFeature:;
+ (id)p_tabkitAbilityConfig;
+ (id)preconnectHostConfigForBizTag:;
+ (id)tabKitConfigForBizTag:;
@end
