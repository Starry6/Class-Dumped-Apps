@interface AWELiveRelevantRecommendationVSInfoEpisode : AWEBaseApiModel
@property (nonatomic) q episodeId;
@property (nonatomic) NSString episodeName;
@property (nonatomic) AWEURLModel episodeCover;
@property (nonatomic) NSString currentPeriod;
@property (nonatomic) q seasonId;
@property (nonatomic) NSString itemId;
- (id)episodeCover;
- (void)setEpisodeCover:;
- (void).cxx_destruct;
- (void)setEpisodeName:;
- (id)itemId;
- (id)episodeName;
- (id)currentPeriod;
- (long long)seasonId;
- (void)setCurrentPeriod:;
- (void)setSeasonId:;
- (long long)episodeId;
- (void)setEpisodeId:;
- (id)initWithEpisode:;
- (void)setItemId:;
@end
