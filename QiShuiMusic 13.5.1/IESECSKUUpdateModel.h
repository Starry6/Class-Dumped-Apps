@interface IESECSKUUpdateModel : IESECBaseApiModel
@property (nonatomic) NSDictionary skus;
- (void)setSkus:;
- (id)skus;
- (void).cxx_destruct;
+ (id)skusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
