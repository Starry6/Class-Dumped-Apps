@interface IESLiveSaaSCouponPopupCouponModel : BDDynamicMTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString validScene;
@property (nonatomic) NSString validTime;
@property (nonatomic) q countDown;
@property (nonatomic) NSString prizeActivityID;
@property (nonatomic) NSString prizeID;
@property (nonatomic) q credit;
@property (nonatomic) q threshold;
@property (nonatomic) BOOL hasApplied;
@property (nonatomic) NSString couponKey;
@property (nonatomic) NSString couponMetaID;
@property (nonatomic) NSString couponID;
@property (nonatomic) Q couponDiscountType;
@property (nonatomic) IESLiveSaaSCouponPopupDiscountInfoModel discountInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)prizeActivityID;
- (id)prizeID;
- (unsigned long long)couponDiscountType;
- (id)couponID;
- (id)couponKey;
- (id)couponMetaID;
- (id)discountInfo;
- (BOOL)hasApplied;
- (void)setCountDown:;
- (void)setCouponDiscountType:;
- (void)setCouponID:;
- (void)setCouponKey:;
- (void)setCouponMetaID:;
- (void)setDiscountInfo:;
- (void)setHasApplied:;
- (void)setPrizeActivityID:;
- (void)setPrizeID:;
- (void)setValidScene:;
- (void)setValidTime:;
- (id)validScene;
- (id)validTime;
- (long long)threshold;
- (void)setName:;
- (void).cxx_destruct;
- (long long)credit;
- (id)name;
- (void)setThreshold:;
- (long long)countDown;
- (void)setCredit:;
+ (id)JSONKeyPathsByPropertyKey;
@end
