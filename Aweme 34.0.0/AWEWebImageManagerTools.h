@interface AWEWebImageManagerTools : NSObject
+ (id)imageFromMemoryCacheForImageUrlArray:cacheName:;
+ (BOOL)isExistInDefaultImageCache:;
+ (unsigned long long)totalDiskCost;
+ (void)removeAllMemoryCache;
+ (void)removeAllDiskCache;
+ (void)isExistInCacheName:imageUrlArray:completion:;
+ (BOOL)isExistInCacheName:imageUrlArray:;
+ (void)isExistInDefaultImageCache:completion:;
+ (void)performAdditionalOperations:image:from:request:index:cacheName:;
@end
