@interface CSJAdDyLiteInfoModel : CSJBasicModel
@property (nonatomic) q ad_slot_type;
@property (nonatomic) CSJAdDyLiteCouponInfoModel coupon;
@property (nonatomic) q is_direct_lp;
@property (nonatomic) CSJAdDyLiteLiveRoomDataInfoModel live_room_data;
@property (nonatomic) q page_cate;
@property (nonatomic) CSJAdDyLiteRenderConfigInfoModel render_config;
@property (nonatomic) NSDictionary ec_mall_conf;
- (long long)ad_slot_type;
- (id)coupon;
- (id)ec_mall_conf;
- (long long)is_direct_lp;
- (id)live_room_data;
- (long long)page_cate;
- (id)render_config;
- (void)setAd_slot_type:;
- (void)setCoupon:;
- (void)setEc_mall_conf:;
- (void)setIs_direct_lp:;
- (void)setLive_room_data:;
- (void)setPage_cate:;
- (void)setRender_config:;
- (void).cxx_destruct;
@end
