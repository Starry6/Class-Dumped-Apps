@interface SAMPGeniusSummon : SADomainCommand
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) SAMPMediaItem mediaItem;
@property (nonatomic) NSNumber startPlaying;
@property (nonatomic) NSString upNextQueueInsertLocation;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (id)startPlaying;
- (id)mediaItem;
- (void)setMediaItem:;
- (BOOL)mutatingCommand;
- (void)setStartPlaying:;
- (id)upNextQueueInsertLocation;
- (void)setUpNextQueueInsertLocation:;
+ (id)geniusSummon;
+ (id)geniusSummonWithDictionary:context:;
@end
