@interface AWESpecialRichAwemeLifeCardImageSpuInfoModel : AWEBaseApiModel
@property (nonatomic) NSString price;
@property (nonatomic) NSString originPrice;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString spuId;
@property (nonatomic) NSString priceSuffix;
- (id)priceSuffix;
- (id)spuId;
- (void)setSpuId:;
- (id)originPrice;
- (void)setOriginPrice:;
- (void)setPriceSuffix:;
- (id)price;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
- (void)setPrice:;
+ (id)JSONKeyPathsByPropertyKey;
@end
