@interface IESECLiveDispatchEventProductInfo : IESECLiveDispatchEventBase
@property (nonatomic) NSString productID;
@property (nonatomic) NSString promotionID;
@property (nonatomic) @ goodsModel;
- (void)setPromotionID:;
- (id)goodsModel;
- (id)initWithEventName:productID:promotionID:;
- (id)promotionID;
- (void)setGoodsModel:;
- (id)productID;
- (void)setProductID:;
- (long long)type;
- (void).cxx_destruct;
- (id)eventData;
@end
