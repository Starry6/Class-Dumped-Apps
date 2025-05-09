@interface IESECGoodsDetailButtonModel : MTLModel
@property (nonatomic) IESECGoodsDetailButtonLinksModel links;
@property (nonatomic) NSString text;
@property (nonatomic) NSString subText;
@property (nonatomic) q couponAmount;
@property (nonatomic) Q virtualGoodsOrderState;
@property (nonatomic) Q goodsSpecialType;
@property (nonatomic) BOOL isInvalidVerison;
@property (nonatomic) NSString versionToast;
@property (nonatomic) IESECGoodsDetailButtonTipsModel buttonTips;
@property (nonatomic) NSString toast;
@property (nonatomic) IESECGoodsDetailButtonExtraModel extra;
@property (nonatomic) BOOL grayButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subText;
- (id)buttonTips;
- (long long)couponAmount;
- (unsigned long long)goodsSpecialType;
- (BOOL)grayButton;
- (BOOL)isInvalidVerison;
- (void)setButtonTips:;
- (void)setCouponAmount:;
- (void)setExtra:;
- (void)setGoodsSpecialType:;
- (void)setGrayButton:;
- (void)setIsInvalidVerison:;
- (void)setSubText:;
- (void)setVersionToast:;
- (void)setVirtualGoodsOrderState:;
- (id)versionToast;
- (unsigned long long)virtualGoodsOrderState;
- (id)extra;
- (id)init;
- (void)setText:;
- (id)links;
- (void).cxx_destruct;
- (id)text;
- (void)setLinks:;
- (void)setToast:;
- (id)toast;
+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
