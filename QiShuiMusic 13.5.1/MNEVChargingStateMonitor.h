@interface MNEVChargingStateMonitor : NSObject
@property (nonatomic) NSMeasurement targetBatteryCharge;
@property (nonatomic) <MNEVChargingStateMonitorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_startTimer;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)virtualGarageManager:didUpdateSelectedVehicle:;
- (id)initWithTargetBatteryCharge:;
- (void)updateForLocation:;
- (void)updateForArrival;
- (void)_notifyShouldShowChargingInfo;
- (void)_updateForVehicle:forceDelegateCallback:;
- (id)targetBatteryCharge;
@end
