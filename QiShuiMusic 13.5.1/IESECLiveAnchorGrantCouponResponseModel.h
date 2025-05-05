@interface IESECLiveAnchorGrantCouponResponseModel : IESECLiveApiBaseModel
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) NSNumber countdown;
@property (nonatomic) NSArray currentCouponIds;
@property (nonatomic) BOOL allowSetCoupons;
@property (nonatomic) NSDictionary imContent;
- (BOOL)allowSetCoupons;
- (id)currentCouponIds;
- (id)imContent;
- (void)setAllowSetCoupons:;
- (void)setCurrentCouponIds:;
- (void)setImContent:;
- (void)setServerTime:;
- (void).cxx_destruct;
- (id)serverTime;
- (id)countdown;
- (void)setCountdown:;
+ (id)JSONKeyPathsByPropertyKey;
@end
