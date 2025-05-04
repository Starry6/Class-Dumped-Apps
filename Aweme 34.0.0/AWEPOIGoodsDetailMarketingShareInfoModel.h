@interface AWEPOIGoodsDetailMarketingShareInfoModel : MTLModel
@property (nonatomic) AWEPOIGoodsDetailSharePlayInfoStructModel masterSharePlayInfo;
@property (nonatomic) AWEPOIGoodsDetailSharePlayInfoStructModel guestSharePlayInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)playStatus;
- (id)trackParamsWithRouter:;
- (id)masterSharePlayInfo;
- (id)guestSharePlayInfo;
- (id)masterCouponId;
- (void)setMasterSharePlayInfo:;
- (void)setGuestSharePlayInfo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
