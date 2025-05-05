@interface IESLiveSaaSGoodsDiscountTagModel : BDDynamicMTLModel
@property (nonatomic) NSString tag;
@property (nonatomic) NSString tagHeader;
@property (nonatomic) q type;
@property (nonatomic) NSString discountID;
@property (nonatomic) NSString tagIcon;
@property (nonatomic) NSString tagBackground;
@property (nonatomic) NSNumber isShow;
@property (nonatomic) NSNumber userTag;
@property (nonatomic) BOOL isFansCoupon;
@property (nonatomic) BOOL isValid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tagIcon;
- (BOOL)isFansCoupon;
- (BOOL)isShopNew;
- (void)setTagBackground:;
- (void)setTagIcon:;
- (id)tagBackground;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (id)JSONKeyPathsByPropertyKey;
@end
