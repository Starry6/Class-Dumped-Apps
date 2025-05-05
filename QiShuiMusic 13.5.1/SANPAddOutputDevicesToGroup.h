@interface SANPAddOutputDevicesToGroup : SABaseClientBoundCommand
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
+ (id)addOutputDevicesToGroup;
+ (id)addOutputDevicesToGroupWithDictionary:context:;
@end
