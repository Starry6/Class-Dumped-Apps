@interface SANPSetRepeatMode : SADomainCommand
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) NSString repeatMode;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (void)setRepeatMode:;
- (BOOL)requiresResponse;
- (id)repeatMode;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
+ (id)setRepeatMode;
+ (id)setRepeatModeWithDictionary:context:;
@end
