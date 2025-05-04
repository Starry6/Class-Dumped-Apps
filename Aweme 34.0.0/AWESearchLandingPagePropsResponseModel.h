@interface AWESearchLandingPagePropsResponseModel : AWEBaseApiModel
@property (nonatomic) AWESearchLandingPageEffectsListModel propsList;
- (id)propsList;
- (void)setPropsList:;
- (void).cxx_destruct;
+ (id)propListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
