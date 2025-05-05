@interface VGVehicleDeduper : NSObject
+ (long long)actionForAddingNewVehicle:withExistingGarageVehicles:andUnpairedVehicles:;
+ (id)_vehicleMatchingVehicle:inArray:;
@end
