@interface AWEGoodsPriceInfoModel : MTLModel
@property (nonatomic) NSNumber originPrice;
@property (nonatomic) NSNumber effectiveMinPrice;
@property (nonatomic) NSNumber effectiveMaxPrice;
@property (nonatomic) NSString priceTrackingInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)originPrice;
- (void)setOriginPrice:;
- (id)effectiveMinPrice;
- (id)effectiveMaxPrice;
- (id)priceTrackingInfo;
- (void)setEffectiveMinPrice:;
- (void)setEffectiveMaxPrice:;
- (void)setPriceTrackingInfo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
