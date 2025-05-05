@interface SBSApplicationCarPlayService : NSObject
- (void)fetchIconStateForVehicleId:withCompletion:;
- (void)setIconState:hiddenIcons:forVehicleId:;
- (void)resetIconStateForVehicleId:;
- (void)fetchApplicationIconInformationForBundleIdentifier:inVehicle:withCompletion:;
@end
