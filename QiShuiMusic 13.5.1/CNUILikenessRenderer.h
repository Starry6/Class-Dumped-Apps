@interface CNUILikenessRenderer : NSObject
+ (id)cachingRendererWithLikenessResolver:capacity:schedulerProvider:;
+ (id)descriptorForRequiredKeysForCaching;
+ (id)concurrentCachingRendererWithLikenessResolver:capacity:schedulerProvider:;
+ (id)rendererWithLikenessResolver:schedulerProvider:;
+ (id)descriptorForRequiredKeys;
+ (id)cachingRendererWithLikenessResolver:schedulerProvider:;
@end
