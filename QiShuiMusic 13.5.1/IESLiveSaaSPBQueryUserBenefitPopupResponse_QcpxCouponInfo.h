@interface IESLiveSaaSPBQueryUserBenefitPopupResponse_QcpxCouponInfo : GPBMessage
@property (nonatomic) q qponValue;
@property (nonatomic) q qponThreshold;
@property (nonatomic) q applyTime;
@property (nonatomic) q expireTime;
@property (nonatomic) BOOL applied;
@property (nonatomic) GPBInt64ObjectDictionary incrCoupon;
@property (nonatomic) Q incrCoupon_Count;
+ (id)descriptor;
@end
