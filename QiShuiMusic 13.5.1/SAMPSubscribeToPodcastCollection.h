@interface SAMPSubscribeToPodcastCollection : SADomainCommand
@property (nonatomic) NSString assetInfo;
@property (nonatomic) NSString hashedRouteUID;
@property (nonatomic) SAMPPodcastCollection podcastCollection;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)assetInfo;
- (void)setAssetInfo:;
- (id)hashedRouteUID;
- (void)setHashedRouteUID:;
- (id)podcastCollection;
- (void)setPodcastCollection:;
+ (id)subscribeToPodcastCollection;
+ (id)subscribeToPodcastCollectionWithDictionary:context:;
@end
