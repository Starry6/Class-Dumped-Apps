@interface SAMPLoadQP : SADomainCommand
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) NSNumber startPlaying;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (id)startPlaying;
- (void)setStartPlaying:;
+ (id)loadQP;
+ (id)loadQPWithDictionary:context:;
@end
