@interface SANPIncreasePlaybackSpeed : SADomainCommand
@property (nonatomic) NSArray hashedRouteUIDs;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
+ (id)increasePlaybackSpeed;
+ (id)increasePlaybackSpeedWithDictionary:context:;
@end
