@interface IESIMWebImageManagerTools : NSObject
+ (BOOL)isExistInCacheName:imageUrlArray:;
+ (BOOL)isExistInDefaultImageCache:;
+ (void)removeAllDiskCache;
+ (void)removeAllMemoryCache;
+ (unsigned long long)totalDiskCost;
@end
