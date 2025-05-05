@interface IESECLiveGoodsAddToCardRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString promotionID;
@property (nonatomic) NSString productID;
@property (nonatomic) NSDictionary skuParams;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSNumber channelID;
@property (nonatomic) NSNumber channelType;
- (void)setExtraParams:;
- (void)setPromotionID:;
- (id)buildParams;
- (id)extraParams;
- (id)promotionID;
- (void)setSkuParams:;
- (id)skuParams;
- (id)productID;
- (void)setChannelID:;
- (void)setProductID:;
- (void).cxx_destruct;
- (id)channelID;
- (id)channelType;
- (void)setChannelType:;
@end
