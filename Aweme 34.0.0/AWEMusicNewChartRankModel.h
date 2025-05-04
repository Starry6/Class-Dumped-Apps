@interface AWEMusicNewChartRankModel : AWEBaseDataModel
@property (nonatomic) NSString rankId;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString detailUrl;
@property (nonatomic) NSNumber rank;
@property (nonatomic) NSInteger heat;
@property (nonatomic) NSInteger rankTrend;
- (void)setHeat:;
- (void)setRankTrend:;
- (void)setDetailUrl:;
- (void)setRankId:;
- (id)detailUrl;
- (id)rankId;
- (int)heat;
- (int)rankTrend;
- (id)rank;
- (void)setRank:;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
