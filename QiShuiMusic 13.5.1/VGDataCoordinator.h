@interface VGDataCoordinator : NSObject
@property (nonatomic) NSArray unpairedVehicles;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_updateGarageWithVehicle:syncAcrossDevices:;
- (id)deviceIdentifier;
- (void)dealloc;
- (void)startContinuousUpdatesForVehicle:;
- (id)_vehicleStateProviderForVehicle:;
- (double)_vehicleStateRefreshInterval;
- (id)unpairedVehicles;
- (void)_removeUnpairedIapVehicleIfNeeded;
- (void)_setupTimerIfNeeded;
- (void)_stopChargeStreamForVehicle:;
- (id)_oemAppForChargeStreamForVehicle:;
- (void)_startChargeStreamForVehicle:;
- (void)accessoryUpdatedWithVehicle:;
- (BOOL)shouldUnpairVehicle:;
- (unsigned long long)_indexOfVehicleInUnpairedVehicles:;
- (void)unpairVehicle:;
- (void)_loadIapVehicles;
- (id)_applicationRecordForVehicle:;
- (void)_invalidateRefreshTimer;
- (void)getLatestStateOfVehicle:withReply:;
- (void).cxx_destruct;
- (void)vehicleStateUpdated:;
- (void)_updateStateOfChargeForVehicle:syncAcrossDevices:completion:;
- (void)endAllContinuousUpdates;
- (void)_loadAllOEMVehiclesForApps:completion:;
- (void)_refreshStateForTrackedVehicles;
- (id)_applicationForVehicle:;
- (id)initWithApplicationFinder:externalAccessory:delegate:;
- (void)finishOnboardingVehicle:;
- (void)_saveOnboardingInfoForVehicle:;
- (void)OEMAppsUpdated:;
@end
