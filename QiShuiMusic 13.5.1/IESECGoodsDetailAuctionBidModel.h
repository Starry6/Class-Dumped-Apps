@interface IESECGoodsDetailAuctionBidModel : IESECBaseApiModel
@property (nonatomic) IESECLongContentLabelElement titleElement;
@property (nonatomic) NSArray contentArray;
- (id)contentArray;
- (void)setContentArray:;
- (void).cxx_destruct;
- (id)titleElement;
- (void)setTitleElement:;
+ (id)contentArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
