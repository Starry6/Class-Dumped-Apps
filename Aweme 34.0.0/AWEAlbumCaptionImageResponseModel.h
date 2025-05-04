@interface AWEAlbumCaptionImageResponseModel : AWEBaseApiModel
@property (nonatomic) q demotionStatus;
@property (nonatomic) AWEAwemeModel aweme;
- (id)aweme;
- (void)setAweme:;
- (long long)demotionStatus;
- (void)setDemotionStatus:;
- (void).cxx_destruct;
+ (id)demotionStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
