@interface IESECLiveGoodsUtilsIDResult : NSObject
@property (nonatomic) NSArray productIDs;
@property (nonatomic) NSArray promotionIDs;
@property (nonatomic) NSArray limitBuyPromotionIDs;
@property (nonatomic) NSArray limitBuyProductIDs;
@property (nonatomic) NSArray limitPreHeatBuyPromotionIDs;
@property (nonatomic) NSArray limitPreHeatBuyProductIDs;
- (void)setLimitPreHeatBuyPromotionIDs:;
- (id)limitBuyProductIDs;
- (id)limitBuyPromotionIDs;
- (id)limitPreHeatBuyProductIDs;
- (id)limitPreHeatBuyPromotionIDs;
- (id)productIDs;
- (id)promotionIDs;
- (void)setLimitBuyProductIDs:;
- (void)setLimitBuyPromotionIDs:;
- (void)setLimitPreHeatBuyProductIDs:;
- (void)setProductIDs:;
- (void)setPromotionIDs:;
- (void).cxx_destruct;
@end
