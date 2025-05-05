@interface AWEIMCommerceCouponStatusInfoModel : IESIMBaseApiModel
@property (nonatomic) NSString couponID;
@property (nonatomic) q serverMessageID;
@property (nonatomic) Q couponStatus;
@property (nonatomic) NSString showExpireTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)serverMessageID;
- (id)couponID;
- (unsigned long long)couponStatus;
- (void)setCouponID:;
- (void)setCouponStatus:;
- (void)setServerMessageID:;
- (void)setShowExpireTime:;
- (id)showExpireTime;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
