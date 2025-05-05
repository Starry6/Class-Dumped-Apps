@interface MNTimeAndDistanceUpdater : NSObject
@property (nonatomic) <MNTimeAndDistanceUpdaterDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)startUpdating;
- (void)stopUpdating;
- (void)setLocation:notificationType:;
- (void)setRoutes:mainRoute:location:notificationType:;
- (void)updateDisplayETAForRoute:notificationType:;
- (id)_displayETAInfoForRoute:routeCoordinate:;
- (id)_routeDistanceInfoForRoute:routeCoordinate:;
- (id)_batteryChargeInfoForRoute:routeCoordinate:;
- (void)_startTimerToNextMinute;
- (void)_logDisplayETAInfo:logType:;
@end
