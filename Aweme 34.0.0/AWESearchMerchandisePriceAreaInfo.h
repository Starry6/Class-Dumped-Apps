@interface AWESearchMerchandisePriceAreaInfo : AWEBaseApiModel
@property (nonatomic) AWEURLModel backgroundImage;
@property (nonatomic) AWEURLModel icon;
- (id)backgroundImage;
- (void)setBackgroundImage:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)iconJsonTransformer;
+ (id)backgroundImageJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
