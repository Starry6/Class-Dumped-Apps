@interface HybridGlobalPropsUtils : NSObject
+ (id)defaultGlobalProps;
+ (id)resourceGlobalPropsWithResourceProvider:resourceLoadCost:containerInitCost:url:;
@end
