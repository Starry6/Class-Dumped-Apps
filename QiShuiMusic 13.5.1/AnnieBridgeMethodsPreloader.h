@interface AnnieBridgeMethodsPreloader : NSObject
+ (unsigned long long)mappedAuthType:;
+ (void)_registerLegacyBridgeMethodToGlobal:;
+ (void)_registerNewBridgeMethodToGlobal:;
+ (void)loadAnnieBridgeMethodsTask;
@end
