@interface IESECGoodsDetailDetailTopInfoDataModel : IESECBaseApiModel
@property (nonatomic) IESECImageBoxElement mainImage;
@property (nonatomic) NSArray topBanners;
@property (nonatomic) NSArray needWholeWidth;
@property (nonatomic) NSArray propertySKUs;
@property (nonatomic) NSDictionary propertyGroupDict;
@property (nonatomic) NSArray tableContents;
@property (nonatomic) IESECGoodsDetailDetailTagCard tagCard;
- (id)tagCard;
- (id)mainImage;
- (id)needWholeWidth;
- (id)propertyGroupDict;
- (id)propertySKUs;
- (void)setMainImage:;
- (void)setNeedWholeWidth:;
- (void)setPropertyGroupDict:;
- (void)setPropertySKUs:;
- (void)setTableContents:;
- (void)setTagCard:;
- (void)setTopBanners:;
- (id)tableContents;
- (id)topBanners;
- (void).cxx_destruct;
+ (id)tableContentsJSONTransformer;
+ (id)topBannersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
