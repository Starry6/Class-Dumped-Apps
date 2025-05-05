@interface SAMPGetStateResponseRemote : SABaseClientBoundCommand
@property (nonatomic) SAMPGetState getState;
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) double routeTimeout;
- (void)af_addEntriesToAnalyticsContext:;
- (id)getState;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (BOOL)mutatingCommand;
- (double)routeTimeout;
- (void)setRouteTimeout:;
- (void)setGetState:;
+ (id)getStateResponseRemote;
+ (id)getStateResponseRemoteWithDictionary:context:;
@end
