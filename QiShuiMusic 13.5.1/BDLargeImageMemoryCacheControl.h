@interface BDLargeImageMemoryCacheControl : NSObject
@property (nonatomic) BDImageCacheConfig separatedMemoryCacheConfig;
@property (nonatomic) Q largeImageMemoryLimit;
- (unsigned long long)largeImageMemoryLimit;
- (id)separatedMemoryCacheConfig;
- (void)setLargeImageMemoryLimit:;
- (void)setSeparatedMemoryCacheConfig:;
- (id)init;
- (void).cxx_destruct;
@end
