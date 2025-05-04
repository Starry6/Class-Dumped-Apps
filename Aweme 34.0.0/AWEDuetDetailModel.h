@interface AWEDuetDetailModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) q userCount;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void).cxx_destruct;
- (void)setUserCount:;
- (long long)userCount;
+ (id)awemeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
