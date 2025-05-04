@interface AWEDiscoverCoverModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel dynamicCover;
@property (nonatomic) AWEURLModel originCover;
@property (nonatomic) NSString awemeID;
- (id)dynamicCover;
- (void)setDynamicCover:;
- (void)setAwemeID:;
- (id)awemeID;
- (id)originCover;
- (void)setOriginCover:;
- (void).cxx_destruct;
+ (id)originCoverJSONTransformer;
+ (id)dynamicCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
