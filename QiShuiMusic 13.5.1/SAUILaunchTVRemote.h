@interface SAUILaunchTVRemote : SABaseClientBoundCommand
@property (nonatomic) NSString hashedRouteId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteId;
- (void)setHashedRouteId:;
+ (id)launchTVRemote;
+ (id)launchTVRemoteWithDictionary:context:;
@end
