@interface AWECommentImageModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel originUrl;
@property (nonatomic) AWEURLModel cropUrl;
@property (nonatomic) AWEURLModel mediumUrl;
@property (nonatomic) AWEURLModel thumbUrl;
@property (nonatomic) AWEURLModel downloadUrl;
@property (nonatomic) AWECommentLivePhotoModel livePhotoModel;
- (id)originUrl;
- (void)setOriginUrl:;
- (id)livePhotoModel;
- (id)mediumUrl;
- (id)cropUrl;
- (id)thumbUrl;
- (void)setThumbUrl:;
- (void)setCropUrl:;
- (void)setMediumUrl:;
- (void)setLivePhotoModel:;
- (void).cxx_destruct;
- (void)setDownloadUrl:;
- (id)downloadUrl;
+ (id)livePhotoModelJSONTransformer;
+ (id)originUrlJSONTransformer;
+ (id)cropUrlJSONTransformer;
+ (id)mediumUrlJSONTransformer;
+ (id)thumbUrlJSONTransformer;
+ (id)downloadUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
