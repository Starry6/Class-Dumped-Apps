@interface SAMPPlayPodcasts : SADomainCommand
@property (nonatomic) NSString episodePlaybackOrder;
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) NSString requesterSharedUserId;
@property (nonatomic) NSString sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) BOOL startPlaying;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (BOOL)startPlaying;
- (void)setStartPlaying:;
- (id)requesterSharedUserId;
- (void)setRequesterSharedUserId:;
- (id)sharedUserIdFromPlayableITunesAccount;
- (void)setSharedUserIdFromPlayableITunesAccount:;
- (id)episodePlaybackOrder;
- (void)setEpisodePlaybackOrder:;
+ (id)playPodcasts;
+ (id)playPodcastsWithDictionary:context:;
@end
