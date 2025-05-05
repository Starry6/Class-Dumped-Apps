@interface SANPSkipToPreviousItem : SADomainCommand
@property (nonatomic) NSArray hashedRouteUIDs;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
+ (id)skipToPreviousItem;
+ (id)skipToPreviousItemWithDictionary:context:;
@end
