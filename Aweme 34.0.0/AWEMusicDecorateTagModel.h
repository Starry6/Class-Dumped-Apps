@interface AWEMusicDecorateTagModel : AWEBaseApiModel
@property (nonatomic) q clipTagType;
@property (nonatomic) AWEURLModel tagImageURL;
@property (nonatomic) AWEURLModel tagImageURLDark;
- (long long)clipTagType;
- (void)setClipTagType:;
- (id)tagImageURL;
- (void)setTagImageURL:;
- (id)tagImageURLDark;
- (void)setTagImageURLDark:;
- (void).cxx_destruct;
+ (id)tagImageURLJSONTransformer;
+ (id)tagImageURLDarkJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
