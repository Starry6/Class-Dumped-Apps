@interface IESLiveSaaSWebImageImplWrapper : IESLiveWebImageImplWrapper
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) <IESLiveSaaSWebImageService> webImageImpl;
@property (nonatomic) IESLiveSaaSWebImageLoadRetryCache webImageLoadRetryCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createWebPDecoderWithData:scale:;
- (id)createWebPPlayer;
- (void)ieslive_appliedImageView:imageURLs:placeholderImage:cornerRadius:completed:;
- (void)ieslive_appliedImageView:imageURLs:placeholderImage:needCircular:completed:;
- (void)ieslive_appliedUIButton:controlState:imageURLs:placeholderImage:options:cornerRadius:completed:;
- (void)ieslive_cancelCurrentImageLoadWithImageView:;
- (long long)ieslive_getWebInternalType;
- (void)ieslivesaas_clearMemory;
- (id)ieslivesaas_imageFromCacheWithKey:cacheType:size:;
- (id)imageCachePathForKey:;
- (BOOL)imageExistInCacheWithKey:cacheType:;
- (id)imageFromCacheWithKey:cacheType:;
- (BOOL)imageLoadRetryLimitEnable;
- (id)imageWithData:preloadAllFrame:;
- (id)initWithWebImageImpl:;
- (void)loadImageWithURL:options:complete:;
- (void)loadImageWithURL:options:targetSize:complete:;
- (void)loadImageWithURLs:options:complete:;
- (void)loadImagesWithURLs:options:complete:;
- (void)prefetchImagesWithURLs:complete:;
- (void)setWebImageImpl:;
- (void)setWebImageLoadRetryCache:;
- (void)storeImage:forKey:toDisk:;
- (void)storeImage:imageData:forKey:toDisk:;
- (id)webImageImpl;
- (id)webImageLoadRetryCache;
- (id)webPPlayerWithName:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (id)imageDataForKey:;
@end
