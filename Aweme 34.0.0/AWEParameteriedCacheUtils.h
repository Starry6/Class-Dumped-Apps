@interface AWEParameteriedCacheUtils : NSObject
+ (BOOL)cacheFileIsExistWithKey:fileType:;
+ (id)generateCacheFilePathWithKey:fileType:;
+ (void)cacheFileWithURL:key:fileType:shootWay:enterFrom:completion:;
@end
