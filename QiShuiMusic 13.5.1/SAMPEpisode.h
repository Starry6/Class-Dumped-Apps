@interface SAMPEpisode : SAMPMediaItem
@property (nonatomic) q episodeNumber;
@property (nonatomic) q seasonNumber;
@property (nonatomic) q showEpisodesCount;
@property (nonatomic) NSString showName;
- (void)setSeasonNumber:;
- (void)setEpisodeNumber:;
- (id)groupIdentifier;
- (long long)seasonNumber;
- (id)encodedClassName;
- (long long)episodeNumber;
- (long long)showEpisodesCount;
- (void)setShowEpisodesCount:;
- (id)showName;
- (void)setShowName:;
+ (id)episode;
+ (id)episodeWithDictionary:context:;
@end
