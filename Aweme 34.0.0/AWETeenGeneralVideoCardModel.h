@interface AWETeenGeneralVideoCardModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSMutableDictionary trackParams;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)trackParams;
- (void)setTrackParams:;
- (void).cxx_destruct;
+ (id)awemeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
