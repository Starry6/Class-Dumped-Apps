@interface AWEIMAssetResourceLoader : NSObject
@property (nonatomic) BOOL loadAsLivePhoto;
@property (nonatomic) q loadStrategy;
@property (nonatomic) AWEIMPhotoAlbumAssetLoadStateObj loadedResult;
@property (nonatomic) @? icloudCallback;
@property (nonatomic) NSString identifier;
- (long long)loadStrategy;
- (void)setLoadStrategy:;
- (void)loadAsset:strategy:loadAsLivePhoto:iCloudStart:complete:;
- (void)setLoadAsLivePhoto:;
- (void)setLoadedResult:;
- (id)loadedResult;
- (void)setIcloudCallback:;
- (void)fetchSpeedFirstUsingNetworkByIdentifier:complete:;
- (void)fetchQualityFirstUsingNetworkByIdentifier:complete:;
- (id)icloudCallback;
- (id)IMAssetLoaderTokenCert;
- (void)invokeIcloudCallBackIfneedWithAsset:;
- (BOOL)sendAsLivePhoto:;
- (void)handleRequestResultURLAsset:info:asset:complete:;
- (void)fetchLivePhotoResourceUsingNetworkByAsset:complete:;
- (void)fetchSlowMotionResouceUsingNetworkByAsset:complete:;
- (void)fetchHighQulityAVAssetUsingNetworkByAsset:complete:;
- (void)handleRequestHighQualityWithImageData:asset:info:;
- (void)fetchHighQualityImageUsingNetworkByAsset:complete:;
- (void)setVideoCoverImageFromAsset:videoAsset:targetSize:complete:;
- (void)handleRequestResultCoverImage:info:isDegreed:asset:;
- (BOOL)loadAsLivePhoto;
- (void)loadAsset:strategy:iCloudStart:complete:;
- (void)setIdentifier:;
- (id)identifier;
- (void).cxx_destruct;
@end
