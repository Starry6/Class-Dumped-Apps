@interface SAMPBasicPodcastAppSearch : SADomainCommand
@property (nonatomic) BOOL acceptPodcastCollections;
@property (nonatomic) BOOL acceptPodcastStations;
@property (nonatomic) q maxResults;
@property (nonatomic) NSString query;
- (id)groupIdentifier;
- (void)setQuery:;
- (id)query;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setMaxResults:;
- (long long)maxResults;
- (BOOL)mutatingCommand;
- (BOOL)acceptPodcastCollections;
- (void)setAcceptPodcastCollections:;
- (BOOL)acceptPodcastStations;
- (void)setAcceptPodcastStations:;
+ (id)basicPodcastAppSearch;
+ (id)basicPodcastAppSearchWithDictionary:context:;
@end
