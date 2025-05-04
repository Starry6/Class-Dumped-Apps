@interface AWEHotSpotDynamicImageManager : NSObject
@property (nonatomic) YYDiskCache diskCache;
@property (nonatomic) NSDictionary cachedDictionary;
- (void)setDiskCache:;
- (void)setCachedDictionary:;
- (BOOL)p_isEqualDictionary:toDictionary:;
- (id)cachedDictionary;
- (void)p_startImageDownloadWithURL:;
- (void)cleanDynamicCache;
- (id)diskCache;
- (void).cxx_destruct;
- (void)loadWithCompletion:;
- (id)imageInfo;
@end
