@interface AWECloudAlbumDetailPublishModel : NSObject
@property (nonatomic) EcAsset asset;
@property (nonatomic) Q index;
@property (nonatomic) PHAsset phAsset;
@property (nonatomic) NSString filePath;
@property (nonatomic) UIImage image;
@property (nonatomic) AVAsset avAsset;
@property (nonatomic) CAKAlbumAssetModel cakAssetModel;
- (void)setCakAssetModel:;
- (id)cakAssetModel;
- (id)initWithAsset:index:;
- (BOOL)isLegalAsset;
- (void)generateCloudCAKAssetModel;
- (void)setPhAsset:;
- (void)setIndex:;
- (id)filePath;
- (unsigned long long)index;
- (id)image;
- (void)setImage:;
- (void)setFilePath:;
- (void)setAvAsset:;
- (void).cxx_destruct;
- (void)setAsset:;
- (id)avAsset;
- (id)asset;
- (id)phAsset;
@end
