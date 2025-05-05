@interface SAMPGetRoutes : SADomainCommand
@property (nonatomic) double routeTimeout;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (double)routeTimeout;
- (void)setRouteTimeout:;
+ (id)getRoutes;
+ (id)getRoutesWithDictionary:context:;
@end
