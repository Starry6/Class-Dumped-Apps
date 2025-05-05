@interface AWEIMSharePoiCouponMessage : AWEIMMessage
@property (nonatomic) NSString poiId;
@property (nonatomic) NSString poiName;
@property (nonatomic) q activityId;
@property (nonatomic) q couponId;
@property (nonatomic) NSString couponDescription;
@property (nonatomic) IESIMURLModel merchantIconUrl;
- (id)merchantIconUrl;
- (id)poiName;
- (id)couponDescription;
- (long long)couponId;
- (id)getContentDict;
- (id)initWithContentDict:;
- (void)setCouponDescription:;
- (void)setCouponId:;
- (void)setMerchantIconUrl:;
- (void)setPoiName:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)poiId;
- (void)setPoiId:;
- (long long)activityId;
- (void)setActivityId:;
@end
