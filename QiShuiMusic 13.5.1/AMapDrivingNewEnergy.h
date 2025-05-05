@interface AMapDrivingNewEnergy : AMapSearchObject
@property (nonatomic) double load;
@property (nonatomic) double leavingPercent;
@property (nonatomic) double arrivingPercent;
@property (nonatomic) double maxVehicleCharge;
@property (nonatomic) double vehicleCharge;
@property (nonatomic) AMapNewEnergyCustomCostMode customCostMode;
- (double)arrivingPercent;
- (id)customCostMode;
- (double)leavingPercent;
- (double)maxVehicleCharge;
- (void)setArrivingPercent:;
- (void)setCustomCostMode:;
- (void)setLeavingPercent:;
- (void)setLoad:;
- (void)setMaxVehicleCharge:;
- (void)setVehicleCharge:;
- (double)vehicleCharge;
- (double)load;
- (id)init;
- (void).cxx_destruct;
@end
