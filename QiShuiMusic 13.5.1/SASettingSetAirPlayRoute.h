@interface SASettingSetAirPlayRoute : SASettingCommand
@property (nonatomic) NSString hashedRouteId;
@property (nonatomic) NSString routeType;
- (void)setRouteType:;
- (id)groupIdentifier;
- (id)routeType;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteId;
- (void)setHashedRouteId:;
+ (id)setAirPlayRoute;
+ (id)setAirPlayRouteWithDictionary:context:;
@end
