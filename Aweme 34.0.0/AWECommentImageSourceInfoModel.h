@interface AWECommentImageSourceInfoModel : NSObject
@property (nonatomic) NSString imageUri;
@property (nonatomic) NSString imageHeight;
@property (nonatomic) NSString imageWidths;
@property (nonatomic) NSString imageFormat;
@property (nonatomic) NSString imageSource;
@property (nonatomic) AWEAssetModel assetModel;
@property (nonatomic) BOOL isConvertFromLive;
- (id)assetModel;
- (BOOL)isConvertFromLive;
- (void)setIsConvertFromLive:;
- (void)setAssetModel:;
- (void)setImageWidths:;
- (void)setImageUri:;
- (id)imageUri;
- (id)imageWidths;
- (id)imageSource;
- (id)imageFormat;
- (void)setImageSource:;
- (void).cxx_destruct;
- (void)setImageFormat:;
- (id)imageHeight;
- (void)setImageHeight:;
@end
