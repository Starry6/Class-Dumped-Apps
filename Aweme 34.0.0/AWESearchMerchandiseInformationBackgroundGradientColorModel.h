@interface AWESearchMerchandiseInformationBackgroundGradientColorModel : AWEBaseApiModel
@property (nonatomic) AWESearchMerchandiseLightDarkGradientColorModel lightGradientColorModel;
@property (nonatomic) AWESearchMerchandiseLightDarkGradientColorModel darkGradientColorModel;
- (id)lightGradientColorModel;
- (void)setLightGradientColorModel:;
- (id)darkGradientColorModel;
- (void)setDarkGradientColorModel:;
- (void).cxx_destruct;
+ (id)lightGradientColorModelJSONTransformer;
+ (id)darkGradientColorModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
