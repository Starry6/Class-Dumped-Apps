@interface SALocalSearchVehicleEventDelete : SADomainCommand
@property (nonatomic) NSArray eventIds;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)eventIds;
- (void)setEventIds:;
+ (id)vehicleEventDelete;
+ (id)vehicleEventDeleteWithDictionary:context:;
@end
