@interface SALocalSearchVehicleEvent : SADomainObject
@property (nonatomic) NSDate date;
@property (nonatomic) SALocation location;
@property (nonatomic) NSString notes;
@property (nonatomic) NSNumber userSetLocation;
@property (nonatomic) NSString vehicleIdentifier;
- (id)notes;
- (id)groupIdentifier;
- (void)setVehicleIdentifier:;
- (id)date;
- (id)location;
- (id)encodedClassName;
- (void)setLocation:;
- (void)setDate:;
- (void)setNotes:;
- (id)vehicleIdentifier;
- (id)userSetLocation;
- (void)setUserSetLocation:;
+ (id)vehicleEvent;
+ (id)vehicleEventWithDictionary:context:;
@end
