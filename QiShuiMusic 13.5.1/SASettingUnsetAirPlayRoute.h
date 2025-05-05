@interface SASettingUnsetAirPlayRoute : SASettingCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)unsetAirPlayRoute;
+ (id)unsetAirPlayRouteWithDictionary:context:;
@end
