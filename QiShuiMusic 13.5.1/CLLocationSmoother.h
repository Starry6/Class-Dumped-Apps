@interface CLLocationSmoother : NSObject
@property (nonatomic) _CLLocationSmootherProxy locationManagerSmootherProxy;
@property (nonatomic) <CLLocationManagerDelegateInternal> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (id)locationManagerSmootherProxy;
- (void)smoothLocations:;
- (void)smoothLocations:handler:;
- (void)smoothLocations:workoutActivityType:handler:;
@end
