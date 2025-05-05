@interface SANPStopPlayback : SADomainCommand
@property (nonatomic) NSArray hashedRouteUIDs;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
+ (id)stopPlayback;
+ (id)stopPlaybackWithDictionary:context:;
@end
