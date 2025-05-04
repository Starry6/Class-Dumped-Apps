@interface AWEMusicChartRankModel : AWEBaseApiModel
@property (nonatomic) NSString rankId;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString detailUrl;
@property (nonatomic) NSNumber rank;
- (void)setRankId:;
- (id)detailUrl;
- (id)rankId;
- (id)rank;
- (void)setRank:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
