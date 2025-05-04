@interface AWEMixVideoStaticsModel : AWEBaseApiModel
@property (nonatomic) NSNumber playCount;
@property (nonatomic) NSNumber collectCount;
@property (nonatomic) NSNumber currentEpisode;
@property (nonatomic) NSNumber maxEpisode;
@property (nonatomic) NSNumber lastEpisode;
@property (nonatomic) NSNumber updatedCount;
@property (nonatomic) NSNumber collectNum;
@property (nonatomic) NSNumber totalEpisode;
- (id)maxEpisode;
- (void)setCollectCount:;
- (id)totalEpisode;
- (void)setTotalEpisode:;
- (id)collectCount;
- (void)setMaxEpisode:;
- (id)lastEpisode;
- (void)setLastEpisode:;
- (id)updatedCount;
- (void)setUpdatedCount:;
- (id)collectNum;
- (void)setCollectNum:;
- (id)playCount;
- (void).cxx_destruct;
- (void)setPlayCount:;
- (id)currentEpisode;
- (void)setCurrentEpisode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
