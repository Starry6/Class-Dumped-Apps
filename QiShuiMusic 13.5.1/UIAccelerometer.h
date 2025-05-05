@interface UIAccelerometer : NSObject
@property (nonatomic) double updateInterval;
@property (nonatomic) <UIAccelerometerDelegate> delegate;
- (id)init;
- (void)dealloc;
- (double)updateInterval;
- (void)setDelegate:;
- (void)setUpdateInterval:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_willResume:;
- (void)_didSuspend:;
- (void)_acceleratedInX:y:z:timestamp:;
- (id)_motionManager;
- (void)_startAccelerometerIfNecessary;
- (void)_stopAccelerometer;
+ (id)sharedAccelerometer;
@end
