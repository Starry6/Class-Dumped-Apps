@interface SAMPPlayPodcastEpisode : SADomainCommand
@property (nonatomic) NSString assetInfo;
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) SAMPPodcast podcastEpisode;
@property (nonatomic) NSString requesterSharedUserId;
@property (nonatomic) NSString sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) BOOL startPlaying;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (id)assetInfo;
- (void)setAssetInfo:;
- (BOOL)startPlaying;
- (void)setPodcastEpisode:;
- (id)podcastEpisode;
- (BOOL)mutatingCommand;
- (void)setStartPlaying:;
- (id)requesterSharedUserId;
- (void)setRequesterSharedUserId:;
- (id)sharedUserIdFromPlayableITunesAccount;
- (void)setSharedUserIdFromPlayableITunesAccount:;
+ (id)playPodcastEpisode;
+ (id)playPodcastEpisodeWithDictionary:context:;
@end
