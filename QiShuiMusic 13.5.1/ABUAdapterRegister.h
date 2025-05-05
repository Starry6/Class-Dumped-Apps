@interface ABUAdapterRegister : NSObject
- (id)__ABU__pangle;
+ (id)_adapters;
+ (id)adapterConfigWithServerKey:;
+ (void)bindAdAdaptersToConfigAdapter:withConfig:;
+ (void)enumerateServerKeyAndAdapterUsingBlock:;
+ (BOOL)registerAdapterWithConfig:;
+ (void)setIsCustomAdapter:toObj:;
+ (void)unregisterAdapterWithConfig:;
@end
