@interface SAMPPlayPodcastStation : SADomainCommand
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) NSString requesterSharedUserId;
@property (nonatomic) NSString sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) BOOL startPlaying;
@property (nonatomic) SAMPPodcastStation station;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)station;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (BOOL)startPlaying;
- (BOOL)mutatingCommand;
- (void)setStartPlaying:;
- (id)requesterSharedUserId;
- (void)setRequesterSharedUserId:;
- (id)sharedUserIdFromPlayableITunesAccount;
- (void)setSharedUserIdFromPlayableITunesAccount:;
- (void)setStation:;
+ (id)playPodcastStation;
+ (id)playPodcastStationWithDictionary:context:;
@end
