@interface AWETrackerInitTaskLocationHelper : NSObject
@property (nonatomic) CLLocationManager locationManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onReceivedWillEnterForegroundNotification:;
- (id)init;
- (void)locationManager:didChangeAuthorizationStatus:;
- (void)locationManagerDidChangeAuthorization:;
- (void)setLocationManager:;
- (id)locationManager;
- (void).cxx_destruct;
@end
