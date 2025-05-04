@interface AWEEcomSearchResultSearchMarketingInfo : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString pendantToast;
@property (nonatomic) AWEEcomSearchInsertCouponConfigModel insertCouponConfig;
@property (nonatomic) NSDictionary couponPitayaData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pendantToast;
- (void)setPendantToast:;
- (id)insertCouponConfig;
- (void)setInsertCouponConfig:;
- (void)fillMerchandiseResp:;
- (id)couponPitayaData;
- (void)setCouponPitayaData:;
- (void).cxx_destruct;
+ (id)insertCouponConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
