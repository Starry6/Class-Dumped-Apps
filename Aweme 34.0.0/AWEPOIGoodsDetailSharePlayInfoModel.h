@interface AWEPOIGoodsDetailSharePlayInfoModel : MTLModel
@property (nonatomic) NSString playShareId;
@property (nonatomic) AWEPOIGoodsDetailPlayInfoModel playInfo;
@property (nonatomic) AWEPOIGoodsDetailPlayCouponInfoModel masterCoupon;
@property (nonatomic) AWEPOIGoodsDetailPlayCouponInfoModel guestCoupon;
@property (nonatomic) NSDictionary fromUser;
@property (nonatomic) NSArray toUser;
@property (nonatomic) q status;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setToUser:;
- (void)setFromUser:;
- (id)playInfo;
- (void)setPlayInfo:;
- (id)playShareId;
- (void)setPlayShareId:;
- (id)masterCoupon;
- (void)setMasterCoupon:;
- (id)guestCoupon;
- (void)setGuestCoupon:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
- (id)fromUser;
- (id)toUser;
+ (id)JSONKeyPathsByPropertyKey;
@end
