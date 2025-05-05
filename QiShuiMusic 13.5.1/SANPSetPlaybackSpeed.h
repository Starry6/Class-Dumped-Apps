@interface SANPSetPlaybackSpeed : SADomainCommand
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) double scalingFactor;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (double)scalingFactor;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (void)setScalingFactor:;
+ (id)setPlaybackSpeed;
+ (id)setPlaybackSpeedWithDictionary:context:;
@end
