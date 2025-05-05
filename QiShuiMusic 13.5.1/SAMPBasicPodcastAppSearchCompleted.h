@interface SAMPBasicPodcastAppSearchCompleted : SABaseCommand
@property (nonatomic) NSArray podcastCollections;
@property (nonatomic) NSArray podcastStations;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)podcastCollections;
- (void)setPodcastCollections:;
- (id)podcastStations;
- (void)setPodcastStations:;
+ (id)basicPodcastAppSearchCompleted;
+ (id)basicPodcastAppSearchCompletedWithDictionary:context:;
@end
