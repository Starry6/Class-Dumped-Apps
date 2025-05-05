@interface BDLCTask : NSObject
@property (nonatomic) CLLocationManager locationManager;
@property (nonatomic) @? completion;
@property (nonatomic) NSString requestId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDesiredAccuracy:distanceFilter:cert:completion:;
- (id)completion;
- (void)setCompletion:;
- (void)dealloc;
- (id)requestId;
- (void)setLocationManager:;
- (void)locationManager:didFailWithError:;
- (void)locationManager:didUpdateLocations:;
- (id)locationManager;
- (void).cxx_destruct;
- (void)stopUpdatingLocation;
@end
