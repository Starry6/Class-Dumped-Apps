@interface SALocalSearchVehicleEventSearch : SADomainCommand
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)vehicleEventSearch;
+ (id)vehicleEventSearchWithDictionary:context:;
@end
