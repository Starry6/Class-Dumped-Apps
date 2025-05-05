@interface IESLiveSaaSCouponPopupModel : BDDynamicMTLModel
@property (nonatomic) NSString popupTitle;
@property (nonatomic) NSString popupDesc;
@property (nonatomic) q enterTime;
@property (nonatomic) q exitTime;
@property (nonatomic) NSArray buttons;
@property (nonatomic) NSArray coupons;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)coupons;
- (long long)enterTime;
- (id)popupDesc;
- (void)setCoupons:;
- (void)setEnterTime:;
- (void)setPopupDesc:;
- (id)buttons;
- (void).cxx_destruct;
- (void)setButtons:;
- (long long)exitTime;
- (id)popupTitle;
- (void)setPopupTitle:;
- (void)setExitTime:;
+ (id)buttonsJSONTransformer;
+ (id)couponsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
