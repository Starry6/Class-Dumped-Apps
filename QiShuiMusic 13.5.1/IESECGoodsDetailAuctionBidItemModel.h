@interface IESECGoodsDetailAuctionBidItemModel : IESECBaseApiModel
@property (nonatomic) IESECPriceElement priceElement;
@property (nonatomic) IESECLongContentLabelElement authorElement;
@property (nonatomic) IESECTextElement timeElement;
- (void)setTimeElement:;
- (id)authorElement;
- (id)priceElement;
- (void)setAuthorElement:;
- (void)setPriceElement:;
- (id)timeElement;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
