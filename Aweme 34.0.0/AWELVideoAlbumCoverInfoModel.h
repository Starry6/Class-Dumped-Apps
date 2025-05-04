@interface AWELVideoAlbumCoverInfoModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel cover;
@property (nonatomic) q style;
- (id)cover;
- (void)setCover:;
- (long long)style;
- (void).cxx_destruct;
- (void)setStyle:;
+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
