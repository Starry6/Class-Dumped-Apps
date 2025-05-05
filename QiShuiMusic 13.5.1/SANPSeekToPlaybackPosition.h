@interface SANPSeekToPlaybackPosition : SADomainCommand
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) NSNumber positionInMilliseconds;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (id)positionInMilliseconds;
- (void)setPositionInMilliseconds:;
+ (id)seekToPlaybackPosition;
+ (id)seekToPlaybackPositionWithDictionary:context:;
@end
