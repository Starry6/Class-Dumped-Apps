@interface AWEPlayletStatisticsModel : AWEBaseApiModel
@property (nonatomic) NSNumber playCount;
@property (nonatomic) NSNumber collectCount;
@property (nonatomic) NSNumber currentEpisode;
@property (nonatomic) NSNumber maxEpisode;
@property (nonatomic) NSNumber totalCount;
@property (nonatomic) NSNumber lastAddedItemTime;
@property (nonatomic) NSNumber rank;
- (id)maxEpisode;
- (void)setCollectCount:;
- (id)collectCount;
- (void)setMaxEpisode:;
- (id)lastAddedItemTime;
- (void)setLastAddedItemTime:;
- (id)totalCount;
- (id)rank;
- (id)playCount;
- (void)setRank:;
- (void).cxx_destruct;
- (void)setPlayCount:;
- (void)setTotalCount:;
- (id)currentEpisode;
- (void)setCurrentEpisode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
