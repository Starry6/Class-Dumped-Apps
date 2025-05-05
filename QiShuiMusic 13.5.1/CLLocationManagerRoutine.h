@interface CLLocationManagerRoutine : NSObject
@property (nonatomic) _CLLocationManagerRoutineProxy locationManagerRoutineProxy;
@property (nonatomic) <CLLocationManagerDelegate> delegate;
- (id)init;
- (id)locationManagerRoutineProxy;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void)setLocationManagerRoutineProxy:;
- (id)initWithQueue:;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
@end
