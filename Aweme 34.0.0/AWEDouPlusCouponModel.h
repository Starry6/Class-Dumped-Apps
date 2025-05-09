@interface AWEDouPlusCouponModel : MTLModel
@property (nonatomic) NSString extraDesc;
@property (nonatomic) NSString funcDesc;
@property (nonatomic) NSString taskID;
@property (nonatomic) NSString aim;
@property (nonatomic) q bonusAmount;
@property (nonatomic) q ceiling;
@property (nonatomic) NSString couponStatusTag;
@property (nonatomic) NSString couponType;
@property (nonatomic) NSString taskStatus;
@property (nonatomic) q threshold;
@property (nonatomic) BOOL canUse;
@property (nonatomic) NSString couponIDString;
@property (nonatomic) NSString couponName;
@property (nonatomic) q expireTime;
@property (nonatomic) q startTime;
@property (nonatomic) NSString desc;
@property (nonatomic) q discountRate;
@property (nonatomic) NSString ceilingDesc;
@property (nonatomic) q couponId;
@property (nonatomic) q createTime;
@property (nonatomic) q discountAmount;
@property (nonatomic) NSString thresholdDesc;
@property (nonatomic) BOOL selected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTaskStatus:;
- (void)setDiscountAmount:;
- (void)setCouponId:;
- (void)setCouponName:;
- (long long)discountAmount;
- (long long)couponId;
- (id)couponName;
- (id)couponType;
- (void)setCouponType:;
- (id)bonusDiscountDesc;
- (long long)bonusAmount;
- (id)bonusAmountString;
- (id)extraDesc;
- (void)setExtraDesc:;
- (id)aim;
- (void)setAim:;
- (void)setBonusAmount:;
- (long long)ceiling;
- (void)setCeiling:;
- (id)couponStatusTag;
- (void)setCouponStatusTag:;
- (void)setCanUse:;
- (id)couponIDString;
- (void)setCouponIDString:;
- (long long)discountRate;
- (void)setDiscountRate:;
- (id)ceilingDesc;
- (void)setCeilingDesc:;
- (id)thresholdDesc;
- (void)setThresholdDesc:;
- (long long)threshold;
- (BOOL)isAvailable;
- (long long)createTime;
- (void)setStartTime:;
- (void)setThreshold:;
- (BOOL)isSelected;
- (void)setDesc:;
- (id)desc;
- (void)setCreateTime:;
- (void).cxx_destruct;
- (BOOL)canUse;
- (void)setTaskID:;
- (long long)startTime;
- (id)taskID;
- (void)setSelected:;
- (long long)expireTime;
- (void)setExpireTime:;
- (id)taskStatus;
- (void)setFuncDesc:;
- (id)funcDesc;
+ (id)JSONKeyPathsByPropertyKey;
@end
