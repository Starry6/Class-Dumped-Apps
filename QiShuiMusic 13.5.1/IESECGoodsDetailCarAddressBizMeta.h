@interface IESECGoodsDetailCarAddressBizMeta : IESECBaseApiModel
@property (nonatomic) NSString selectedShopID;
@property (nonatomic) NSString linkURL;
@property (nonatomic) IESECGoodsPOIModel poiInfo;
- (id)poiInfo;
- (id)selectedShopID;
- (void)setPoiInfo:;
- (void)setSelectedShopID:;
- (void).cxx_destruct;
- (id)linkURL;
- (void)setLinkURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
