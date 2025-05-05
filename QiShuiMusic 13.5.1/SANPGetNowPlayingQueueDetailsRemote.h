@interface SANPGetNowPlayingQueueDetailsRemote : SABaseClientBoundCommand
@property (nonatomic) NSArray hashedRouteUIDs;
@property (nonatomic) SANPGetNowPlayingQueueDetails queueDetails;
@property (nonatomic) double routeTimeout;
- (void)af_addEntriesToAnalyticsContext:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (BOOL)mutatingCommand;
- (double)routeTimeout;
- (void)setRouteTimeout:;
- (id)queueDetails;
- (void)setQueueDetails:;
+ (id)getNowPlayingQueueDetailsRemote;
+ (id)getNowPlayingQueueDetailsRemoteWithDictionary:context:;
@end
