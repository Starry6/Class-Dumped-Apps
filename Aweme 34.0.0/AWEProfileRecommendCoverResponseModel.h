@interface AWEProfileRecommendCoverResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemes;
@property (nonatomic) NSString awemeSourceText;
@property (nonatomic) NSString routerSchema;
- (id)awemes;
- (void)setAwemes:;
- (id)awemeSourceText;
- (void)setAwemeSourceText:;
- (id)routerSchema;
- (void)setRouterSchema:;
- (void).cxx_destruct;
+ (id)awemesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
