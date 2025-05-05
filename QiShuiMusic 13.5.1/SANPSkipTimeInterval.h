@interface SANPSkipTimeInterval : SADomainCommand
@property (nonatomic) NSNumber adjustmentInMilliseconds;
@property (nonatomic) NSArray hashedRouteUIDs;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (id)adjustmentInMilliseconds;
- (void)setAdjustmentInMilliseconds:;
+ (id)skipTimeInterval;
+ (id)skipTimeIntervalWithDictionary:context:;
@end
