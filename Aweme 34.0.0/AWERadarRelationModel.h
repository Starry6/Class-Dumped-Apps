@interface AWERadarRelationModel : NSObject
@property (nonatomic) AWEUserModel user;
@property (nonatomic) q couponStatus;
@property (nonatomic) AWERadarCouponModel coupon;
@property (nonatomic) q viewType;
@property (nonatomic) AFDRadarActivityModel activity;
@property (nonatomic) BOOL isFromPrivateAccount;
- (id)coupon;
- (void)setCoupon:;
- (long long)couponStatus;
- (void)setCouponStatus:;
- (BOOL)isFromPrivateAccount;
- (void)setIsFromPrivateAccount:;
- (id)user;
- (void)setUser:;
- (id)activity;
- (void).cxx_destruct;
- (void)setActivity:;
- (long long)viewType;
- (void)setViewType:;
@end
