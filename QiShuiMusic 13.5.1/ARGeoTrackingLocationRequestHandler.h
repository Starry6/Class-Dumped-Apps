@interface ARGeoTrackingLocationRequestHandler : NSObject
@property (nonatomic) @? locationCompletionHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setLocationManager:;
- (void)locationManager:didFailWithError:;
- (void)locationManager:didUpdateLocations:;
- (void).cxx_destruct;
- (void)locationManagerDidChangeAuthorization:;
- (int)waitForAuthorizationStatus;
- (void)requestLocationWithCompletionHandler:;
- (id)locationCompletionHandler;
- (void)setLocationCompletionHandler:;
@end
