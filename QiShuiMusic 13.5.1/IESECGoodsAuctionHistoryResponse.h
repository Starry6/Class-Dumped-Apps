@interface IESECGoodsAuctionHistoryResponse : IESECBaseApiModel
@property (nonatomic) NSArray records;
@property (nonatomic) NSNumber offset;
- (id)records;
- (void)setOffset:;
- (void)setRecords:;
- (id)offset;
- (void).cxx_destruct;
+ (id)recordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
