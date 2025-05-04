@interface AWEFollowShootDetailResponse : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSArray infos;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)infos;
- (void).cxx_destruct;
- (void)setInfos:;
+ (id)infosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
