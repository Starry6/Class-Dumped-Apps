@interface IESIMDiscoverCoverModel : IESIMBaseApiModel
@property (nonatomic) IESIMURLModel dynamicCover;
@property (nonatomic) IESIMURLModel originCover;
@property (nonatomic) NSString awemeID;
- (id)awemeID;
- (void)setOriginCover:;
- (id)dynamicCover;
- (id)originCover;
- (void)setAwemeID:;
- (void)setDynamicCover:;
- (void).cxx_destruct;
+ (id)dynamicCoverJSONTransformer;
+ (id)originCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
