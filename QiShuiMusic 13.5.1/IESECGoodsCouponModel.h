@interface IESECGoodsCouponModel : MTLModel
@property (nonatomic) NSString couponID;
@property (nonatomic) q type;
@property (nonatomic) NSNumber price;
@property (nonatomic) NSString name;
@property (nonatomic) NSString shopName;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber expireTime;
@property (nonatomic) NSString URL;
@property (nonatomic) NSString extra;
@property (nonatomic) NSNumber threshold;
@property (nonatomic) NSString useScope;
@property (nonatomic) NSNumber discountRate;
@property (nonatomic) NSNumber discountLimit;
@property (nonatomic) NSString applyType;
@property (nonatomic) q periodType;
@property (nonatomic) q periodOfValidity;
@property (nonatomic) q couponOptions;
@property (nonatomic) q status;
@property (nonatomic) NSString statusDescription;
@property (nonatomic) NSString whatCoupon;
@property (nonatomic) BOOL isDiscount;
@property (nonatomic) NSString thresholdDescription;
@property (nonatomic) NSString timeLimitDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)couponID;
- (long long)couponOptions;
- (id)discountLimit;
- (id)discountRate;
- (BOOL)isDiscount;
- (long long)periodOfValidity;
- (void)setCouponID:;
- (void)setCouponOptions:;
- (void)setDiscountLimit:;
- (void)setDiscountRate:;
- (void)setExtra:;
- (void)setIsDiscount:;
- (void)setPeriodOfValidity:;
- (void)setShopName:;
- (void)setThresholdDescription:;
- (void)setTimeLimitDescription:;
- (void)setUseScope:;
- (void)setWhatCoupon:;
- (id)shopName;
- (id)thresholdDescription;
- (id)timeLimitDescription;
- (id)useScope;
- (id)whatCoupon;
- (id)statusDescription;
- (id)threshold;
- (void)setStatus:;
- (id)extra;
- (id)init;
- (void)setName:;
- (void)setStartTime:;
- (void)setType:;
- (id)startTime;
- (long long)type;
- (void).cxx_destruct;
- (long long)status;
- (id)name;
- (id)price;
- (void)setURL:;
- (void)setThreshold:;
- (id)URL;
- (id)expireTime;
- (void)setPrice:;
- (void)setExpireTime:;
- (long long)periodType;
- (void)setPeriodType:;
- (void)setStatusDescription:;
- (id)applyType;
- (void)setApplyType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
