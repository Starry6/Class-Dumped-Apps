@interface CalLocationManagerDelegate : NSObject
@property (nonatomic) CLLocation currentLocation;
@property (nonatomic) @? completionBlock;
@property (nonatomic) BOOL didFinish;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCurrentLocation:;
- (void)cancel;
- (void)dealloc;
- (void)locationManager:didChangeAuthorizationStatus:;
- (id)currentLocation;
- (void)setCompletionBlock:;
- (void)locationManager:didFailWithError:;
- (void)locationManager:didUpdateLocations:;
- (void).cxx_destruct;
- (void)timeout;
- (id)completionBlock;
- (id)initWithCurrentBundleID:completionBlock:;
- (void)didFinishLocationLookupWithLocation:error:;
- (BOOL)didFinish;
- (void)setDidFinish:;
@end
