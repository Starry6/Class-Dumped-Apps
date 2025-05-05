@interface CMVehicleState : NSObject
+ (unsigned long long)vehicularHints;
+ (BOOL)isAvailable;
+ (id)mostRecentVehicleConnection;
+ (id)mostRecentInVehicle;
+ (unsigned long long)vehicularOperatorState;
+ (unsigned long long)vehicularState;
+ (unsigned long long)isVehicleBasedOnDeviceId:deviceType:;
@end
