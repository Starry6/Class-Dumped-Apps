@interface IESECLiveGoodsPriceRequest : IESECLiveAPIBaseRequest
@property (nonatomic) NSString productIDs;
@property (nonatomic) NSString promotionIDs;
@property (nonatomic) NSString entranceInfo;
@property (nonatomic) q from;
- (id)buildParams;
- (id)entranceInfo;
- (id)productIDs;
- (id)promotionIDs;
- (void)setEntranceInfo:;
- (void)setProductIDs:;
- (void)setPromotionIDs:;
- (void).cxx_destruct;
- (long long)from;
- (void)setFrom:;
@end
