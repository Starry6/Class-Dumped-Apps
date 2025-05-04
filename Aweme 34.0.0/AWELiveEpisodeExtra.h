@interface AWELiveEpisodeExtra : AWEBaseApiModel
@property (nonatomic) NSNumber episodeId;
@property (nonatomic) NSNumber seasonId;
@property (nonatomic) AWELiveEpisodeMod mod;
- (void).cxx_destruct;
- (id)seasonId;
- (void)setSeasonId:;
- (id)episodeId;
- (void)setEpisodeId:;
- (id)mod;
- (void)setMod:;
+ (id)JSONKeyPathsByPropertyKey;
@end
