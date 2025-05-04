@interface AWESearchMerchandiseInformationBackgroundColorModel : AWEBaseApiModel
@property (nonatomic) NSString bgType;
@property (nonatomic) AWESearchMerchandiseInformationBackgroundGradientColorModel gradientColorModel;
- (id)bgType;
- (void)setBgType:;
- (id)gradientColorModel;
- (void)setGradientColorModel:;
- (void).cxx_destruct;
+ (id)gradientColorModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
