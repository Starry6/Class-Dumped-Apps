@interface SAMPRateMediaEntity : SABaseClientBoundCommand
@property (nonatomic) NSString hashedRouteUID;
@property (nonatomic) q rating;
- (void)af_addEntriesToAnalyticsContext:;
- (long long)rating;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setRating:;
- (id)hashedRouteUID;
- (void)setHashedRouteUID:;
+ (id)rateMediaEntity;
+ (id)rateMediaEntityWithDictionary:context:;
@end
