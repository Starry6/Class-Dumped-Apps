@interface BUResourceLoaderManager : NSObject
@property (nonatomic) NSMutableDictionary loaders;
@property (nonatomic) NSString cachePath;
@property (nonatomic) NSURL videoURL;
@property (nonatomic) AVPlayerItem playItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithVideoURL:cachePath:;
- (id)keyForResourceLoaderWithURL:;
- (id)loaderForRequest:;
- (id)playItem;
- (void)removeDiskCacheResource:;
- (void)removeResourceLoaderWithURL:;
- (void)resourceLoaderDidLoad:url:error:;
- (id)cachePath;
- (id)videoURL;
- (void)dealloc;
- (BOOL)resourceLoader:shouldWaitForLoadingOfRequestedResource:;
- (void).cxx_destruct;
- (id)playerItemWithURL:;
- (void)resourceLoader:didCancelLoadingRequest:;
- (void)setCachePath:;
- (void)requestCancel;
- (id)loaders;
- (void)setLoaders:;
+ (id)assetURLWithURL:;
@end
