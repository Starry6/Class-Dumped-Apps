@interface AWEStickerPickerDataCacheHelper : NSObject
+ (BOOL)canUseCacheWithKey:coldTime:params:;
+ (void)cacheKey:params:;
+ (id)p_cacheKey:;
@end
