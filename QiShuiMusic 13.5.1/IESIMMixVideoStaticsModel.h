@interface IESIMMixVideoStaticsModel : IESIMBaseApiModel
@property (nonatomic) NSNumber playCount;
@property (nonatomic) NSNumber collectCount;
@property (nonatomic) NSNumber currentEpisode;
@property (nonatomic) NSNumber maxEpisode;
@property (nonatomic) NSNumber lastEpisode;
@property (nonatomic) NSNumber updatedCount;
- (void)setLastEpisode:;
- (id)collectCount;
- (id)lastEpisode;
- (id)maxEpisode;
- (void)setCollectCount:;
- (void)setMaxEpisode:;
- (void)setUpdatedCount:;
- (id)updatedCount;
- (id)playCount;
- (void)setPlayCount:;
- (void).cxx_destruct;
- (id)currentEpisode;
- (void)setCurrentEpisode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
