@interface IESECLiveGoodsProductInfo : NSObject
@property (nonatomic) NSString productID;
@property (nonatomic) NSString promotionID;
@property (nonatomic) Q explainType;
@property (nonatomic) NSArray payLoad;
@property (nonatomic) BOOL priceCondition;
- (id)payLoad;
- (void)setExplainType:;
- (void)setPromotionID:;
- (unsigned long long)explainType;
- (BOOL)priceCondition;
- (id)promotionID;
- (void)setPayLoad:;
- (void)setPriceCondition:;
- (id)productID;
- (void)setProductID:;
- (void).cxx_destruct;
+ (id)productInfoFromGoodsModel:payLoadUpdateType:;
@end
