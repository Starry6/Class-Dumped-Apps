@interface IESIMMusicChartRankModel : IESIMBaseApiModel
@property (nonatomic) NSString rankId;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString detailUrl;
@property (nonatomic) NSNumber rank;
- (id)detailUrl;
- (id)rankId;
- (void)setRankId:;
- (id)desc;
- (void)setDesc:;
- (id)rank;
- (void).cxx_destruct;
- (void)setRank:;
+ (id)JSONKeyPathsByPropertyKey;
@end
