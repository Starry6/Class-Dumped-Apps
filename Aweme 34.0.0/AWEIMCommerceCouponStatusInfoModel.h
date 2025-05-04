@interface AWEIMCommerceCouponStatusInfoModel : AWEBaseApiModel
@property (nonatomic) NSString couponID;
@property (nonatomic) q serverMessageID;
@property (nonatomic) Q couponStatus;
@property (nonatomic) NSString showExpireTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)serverMessageID;
- (void)setServerMessageID:;
- (id)couponID;
- (void)setCouponID:;
- (unsigned long long)couponStatus;
- (void)setCouponStatus:;
- (id)showExpireTime;
- (void)setShowExpireTime:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
