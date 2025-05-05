@interface SANPSetShuffleMode : SADomainCommand
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) NSString shuffleMode;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (void)setShuffleMode:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)shuffleMode;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
+ (id)setShuffleMode;
+ (id)setShuffleModeWithDictionary:context:;
@end
