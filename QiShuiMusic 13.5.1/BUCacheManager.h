@interface BUCacheManager : NSObject
@property (nonatomic) double fileOperationTimestamp;
@property (nonatomic) NSMutableDictionary cacheOperationUrls;
@property (nonatomic) NSMutableDictionary cacheMaterials;
- (void)cacheMaterial:withKey:limit:;
- (id)cacheMaterials;
- (id)cacheOperationUrls;
- (void)cacheResourceUseBegin:;
- (void)cacheResourceUseEnd:;
- (void)clearMaterialWithKey:;
- (void)clearOverSizeCache:;
- (void)clearSpecifiedResource:cachePath:;
- (double)fileOperationTimestamp;
- (id)materialModelFromCacheWithKey:;
- (void)setCacheMaterials:;
- (void)setCacheOperationUrls:;
- (void)setFileOperationTimestamp:;
- (id)init;
- (void).cxx_destruct;
+ (id)cachedFilePathForURL:cachePath:;
+ (id)cacheDirectory:;
+ (id)cacheConfigurationForURL:cachePath:;
+ (unsigned long long)calculateCachedSizeWithError:cachePath:;
+ (BOOL)isFileSizeGreaterThanZero:;
+ (void)setFileNameRules:;
+ (id)shared;
+ (void)setCacheDirectory:;
@end
