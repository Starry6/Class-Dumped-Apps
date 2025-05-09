@interface MNArrivalUpdater : NSObject
@property (nonatomic) BOOL isApproachingWaypoint;
@property (nonatomic) Q arrivalState;
@property (nonatomic) BOOL isInPreArrivalRegion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void).cxx_destruct;
- (id)captureStatePlistWithHints:;
- (id)initWithRoute:;
- (void)updateForRoute:;
- (void)updateForLocation:;
- (BOOL)allowDepartureForLocation:;
- (void)arrivalRegionTimerDidFire:;
- (void)evChargingStateMonitorShouldShowChargingInfo:;
- (void)evChargingStateMonitor:didReachTargetBatteryCharge:;
- (void)evChargingStateMonitor:didChangeChargingState:;
- (void)setArrivalState:;
- (void)setIsCharging:location:;
- (void)setIsApproachingWaypoint:;
- (void)forceDepartureForCurrentLeg:;
- (void)_updateForDepartureFromWaypointWithReason:;
- (BOOL)isInPreArrivalRegion;
- (BOOL)_checkApproachingForLocation:;
- (BOOL)_checkPreArrival:forLocation:;
- (BOOL)_checkArrival:forLocation:;
- (double)_distanceToEndOfLeg:fromLocation:;
- (void)_setArrivalForLegIndex:;
- (void)_startMonitoringBatteryChargeForLegIndex:;
- (BOOL)isApproachingWaypoint;
- (unsigned long long)arrivalState;
@end
