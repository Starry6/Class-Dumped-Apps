@interface AWEAlbumImageModel : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) NSString assetLocalIdentifier;
@property (nonatomic) AWEAssetModel asset;
@property (nonatomic) q detectResult;
@property (nonatomic) BOOL networkAccessAllowed;
- (void)setDetectResult:;
- (long long)detectResult;
- (void)setNetworkAccessAllowed:;
- (unsigned long long)hash;
- (id)image;
- (id)assetLocalIdentifier;
- (void)setImage:;
- (void).cxx_destruct;
- (void)setAsset:;
- (BOOL)isEqual:;
- (id)asset;
- (BOOL)networkAccessAllowed;
- (void)setAssetLocalIdentifier:;
@end
