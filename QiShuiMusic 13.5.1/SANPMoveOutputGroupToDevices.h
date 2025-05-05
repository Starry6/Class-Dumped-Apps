@interface SANPMoveOutputGroupToDevices : SABaseClientBoundCommand
@property (nonatomic) NSString groupID;
@property (nonatomic) NSArray hashedRouteUIDs;
- (void)af_addEntriesToAnalyticsContext:;
- (void)setGroupID:;
- (id)groupID;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)hashedRouteUIDs;
- (void)setHashedRouteUIDs:;
- (BOOL)mutatingCommand;
+ (id)moveOutputGroupToDevices;
+ (id)moveOutputGroupToDevicesWithDictionary:context:;
@end
