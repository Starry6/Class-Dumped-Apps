@interface WebGeolocationCoreLocationProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)locationManager:didChangeAuthorizationStatus:;
- (void)start;
- (void)stop;
- (void)locationManager:didFailWithError:;
- (void)locationManager:didUpdateLocations:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setEnableHighAccuracy:;
- (void)requestGeolocationAuthorization;
- (id)initWithListener:;
- (void)createLocationManager;
- (void)sendLocation:;
@end
