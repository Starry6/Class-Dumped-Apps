@interface IESIMDuetDetailModel : IESIMBaseApiModel
@property (nonatomic) IESIMAwemeModel awemeModel;
@property (nonatomic) q userCount;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void).cxx_destruct;
- (long long)userCount;
- (void)setUserCount:;
+ (id)awemeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
