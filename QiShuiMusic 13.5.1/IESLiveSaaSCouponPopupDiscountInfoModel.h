@interface IESLiveSaaSCouponPopupDiscountInfoModel : BDDynamicMTLModel
@property (nonatomic) q maxCreditLimit;
@property (nonatomic) q discount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)discount;
- (long long)maxCreditLimit;
- (void)setDiscount:;
- (void)setMaxCreditLimit:;
+ (id)JSONKeyPathsByPropertyKey;
@end
