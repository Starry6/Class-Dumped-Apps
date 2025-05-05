@interface SALocalSearchVehicleEventCreate : SADomainCommand
@property (nonatomic) SALocation location;
@property (nonatomic) NSString notes;
- (id)notes;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)location;
- (id)encodedClassName;
- (void)setLocation:;
- (void)setNotes:;
+ (id)vehicleEventCreate;
+ (id)vehicleEventCreateWithDictionary:context:;
@end
