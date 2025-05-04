@interface AWELVideoAlbumHistoryInfoModel : AWEBaseApiModel
@property (nonatomic) NSString albumID;
@property (nonatomic) NSString episodeID;
@property (nonatomic) q watchedRank;
@property (nonatomic) NSNumber watchedDuration;
- (void)setAlbumID:;
- (id)watchedDuration;
- (void)setEpisodeID:;
- (long long)watchedRank;
- (void)setWatchedRank:;
- (void)setWatchedDuration:;
- (void).cxx_destruct;
- (id)albumID;
- (id)episodeID;
+ (id)JSONKeyPathsByPropertyKey;
@end
