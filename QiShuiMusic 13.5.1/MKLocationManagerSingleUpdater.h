@interface MKLocationManagerSingleUpdater : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) double timeout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (void)dealloc;
- (void)start;
- (void)setTimeout:;
- (void)locationManagerDidPauseLocationUpdates:;
- (void)setHandler:;
- (id)handler;
- (void)locationManager:didUpdateVehicleHeading:timestamp:;
- (void)locationManager:didUpdateVehicleSpeed:timestamp:;
- (void)locationManagerDidResumeLocationUpdates:;
- (void).cxx_destruct;
- (double)timeout;
- (void)locationManagerUpdatedLocation:;
- (void)locationManagerFailedToUpdateLocation:withError:;
- (void)locationManagerDidReset:;
- (BOOL)locationManagerShouldPauseLocationUpdates:;
- (void)handleTimeout:;
- (id)initWithLocationManager:desiredAccuracy:handler:timeout:maxLocationAge:;
- (id)initWithLocationManager:desiredAccuracy:handler:timeout:;
- (id)initWithLocationManager:desiredAccuracy:handler:;
- (id)initWithLocationManager:handler:;
@end
