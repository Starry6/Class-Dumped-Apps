@interface IESECLiveGoodsPriceInfoModel : MTLModel
@property (nonatomic) NSNumber productID;
@property (nonatomic) NSString priceHeader;
@property (nonatomic) NSNumber minPrice;
@property (nonatomic) NSNumber maxPrice;
@property (nonatomic) NSString minPriceStr;
@property (nonatomic) NSNumber marketPrice;
@property (nonatomic) IESECLiveGoodsExtraModel extra;
@property (nonatomic) NSDictionary updatedEventParam;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMarketPrice:;
- (void)setPriceHeader:;
- (void)setMinPriceStr:;
- (id)marketPrice;
- (id)maxPrice;
- (id)minPrice;
- (id)minPriceStr;
- (id)priceHeader;
- (void)setExtra:;
- (void)setMaxPrice:;
- (void)setMinPrice:;
- (void)setUpdatedEventParam:;
- (id)updatedEventParam;
- (id)productID;
- (id)extra;
- (void)setProductID:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
