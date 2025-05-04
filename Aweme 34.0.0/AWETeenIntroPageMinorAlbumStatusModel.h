@interface AWETeenIntroPageMinorAlbumStatusModel : MTLModel
@property (nonatomic) q currentEpisode;
@property (nonatomic) q totalEpisodes;
@property (nonatomic) q recordEpisode;
@property (nonatomic) q progress;
@property (nonatomic) q playTimes;
@property (nonatomic) NSString recordEpisodeID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)playTimes;
- (void)setPlayTimes:;
- (long long)totalEpisodes;
- (long long)recordEpisode;
- (void)setTotalEpisodes:;
- (void)setRecordEpisode:;
- (id)recordEpisodeID;
- (void)setRecordEpisodeID:;
- (long long)progress;
- (void).cxx_destruct;
- (void)setProgress:;
- (long long)currentEpisode;
- (void)setCurrentEpisode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
