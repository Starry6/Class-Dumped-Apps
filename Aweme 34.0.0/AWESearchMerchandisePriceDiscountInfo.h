@interface AWESearchMerchandisePriceDiscountInfo : AWEBaseApiModel
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) AWESearchMerchandiseCommonTextStruct info;
- (void)setInfo:;
- (id)info;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)iconJsonTransformer;
+ (id)InfoJsonTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
