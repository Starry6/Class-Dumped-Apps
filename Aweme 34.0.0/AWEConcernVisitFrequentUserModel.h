@interface AWEConcernVisitFrequentUserModel : AWEBaseApiModel
@property (nonatomic) AWESimpleUserModel userModel;
@property (nonatomic) q unwatchedCount;
@property (nonatomic) double latestItemPublishTime;
@property (nonatomic) BOOL isEpisode;
@property (nonatomic) NSString episodeExtraInfo;
- (long long)unwatchedCount;
- (void)setUnwatchedCount:;
- (double)latestItemPublishTime;
- (void)setLatestItemPublishTime:;
- (BOOL)isEpisode;
- (void)setIsEpisode:;
- (id)episodeExtraInfo;
- (id)episodeModel;
- (void)setEpisodeExtraInfo:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
+ (id)userModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
