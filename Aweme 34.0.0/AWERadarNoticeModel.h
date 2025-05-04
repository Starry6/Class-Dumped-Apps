@interface AWERadarNoticeModel : AWEBaseApiModel
@property (nonatomic) NSString noticeID;
@property (nonatomic) q type;
@property (nonatomic) AWEUserModel fromUser;
@property (nonatomic) q couponStatus;
@property (nonatomic) AWERadarCouponModel coupon;
- (void)setNoticeID:;
- (void)setFromUser:;
- (id)noticeID;
- (id)coupon;
- (void)setCoupon:;
- (long long)couponStatus;
- (void)setCouponStatus:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)fromUser;
+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)couponJSONTransformer;
@end
