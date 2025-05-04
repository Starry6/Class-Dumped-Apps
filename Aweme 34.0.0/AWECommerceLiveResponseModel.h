@interface AWECommerceLiveResponseModel : AWEBaseApiModel
@property (nonatomic) AWECommerceLiveComponentsModel commerceModel;
- (id)commerceModel;
- (void)setCommerceModel:;
- (void).cxx_destruct;
+ (id)commerceModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
