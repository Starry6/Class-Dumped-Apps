@interface SANPGetVolumeLevel : SABaseClientBoundCommand
@property (nonatomic) NSArray hashedRouteUIDs;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
+ (id)getVolumeLevel;
+ (id)getVolumeLevelWithDictionary:context:;
@end
