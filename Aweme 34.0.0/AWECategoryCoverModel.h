@interface AWECategoryCoverModel : AWEBaseDataModel
@property (nonatomic) NSString awemeID;
@property (nonatomic) AWENewURLModel originCover;
@property (nonatomic) AWENewURLModel dynamicCoverModel;
- (void)setAwemeID:;
- (id)awemeID;
- (id)originCover;
- (void)setOriginCover:;
- (void)setDynamicCoverModel:;
- (id)dynamicCoverModel;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
