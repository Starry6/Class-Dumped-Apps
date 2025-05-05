@interface IESIMPlayletStatisticsModel : IESIMBaseApiModel
@property (nonatomic) NSNumber playCount;
@property (nonatomic) NSNumber collectCount;
@property (nonatomic) NSNumber currentEpisode;
@property (nonatomic) NSNumber maxEpisode;
@property (nonatomic) NSNumber totalCount;
- (id)collectCount;
- (id)maxEpisode;
- (void)setCollectCount:;
- (void)setMaxEpisode:;
- (id)playCount;
- (void)setPlayCount:;
- (id)totalCount;
- (void).cxx_destruct;
- (void)setTotalCount:;
- (id)currentEpisode;
- (void)setCurrentEpisode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
