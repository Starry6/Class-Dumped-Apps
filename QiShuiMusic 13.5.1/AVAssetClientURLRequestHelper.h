@interface AVAssetClientURLRequestHelper : NSObject
@property (nonatomic) @? figAssetProvider;
@property (nonatomic) AVAssetResourceLoader resourceLoader;
@property (nonatomic) r^{OpaqueFigAsset=} figAsset;
- (id)initWithAsset:;
- (void)dealloc;
- (void)setResourceLoader:;
- (id)figAsset;
- (id)figAssetProvider;
- (void)setFigAssetProvider:;
- (id)URLAsset;
- (id)resourceLoader;
@end
