@interface IESLiveSaaSCouponPopupPostResponseModel : BDDynamicMTLModel
@property (nonatomic) q applyStatus;
@property (nonatomic) NSArray coupons;
@property (nonatomic) NSString toast;
@property (nonatomic) NSString errTips;
@property (nonatomic) q errNum;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coupons;
- (id)errTips;
- (long long)errNum;
- (void)setCoupons:;
- (void)setErrNum:;
- (void)setErrTips:;
- (void).cxx_destruct;
- (void)setToast:;
- (id)toast;
- (long long)applyStatus;
- (void)setApplyStatus:;
+ (id)couponsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
