@interface IESECGoodsDetailPromotionInfoModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) q promotionType;
@property (nonatomic) IESECURLModel promotionPicUrl;
@property (nonatomic) IESECGoodsDetailPromotionGeneralModel promotionGeneral;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)promotionPicUrl;
- (id)promotionGeneral;
- (long long)promotionType;
- (void)setPromotionGeneral:;
- (void)setPromotionPicUrl:;
- (void)setPromotionType:;
- (void)setTitle:;
- (id)title;
- (BOOL)isValid;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
