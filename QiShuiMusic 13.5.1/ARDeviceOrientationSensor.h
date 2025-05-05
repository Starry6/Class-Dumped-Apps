@interface ARDeviceOrientationSensor : NSObject
@property (nonatomic) double interval;
@property (nonatomic) <ARSensorDelegate> delegate;
@property (nonatomic) q worldAlignment;
@property (nonatomic) Q powerUsage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)start;
- (void)setDelegate:;
- (void)stop;
- (void)setInterval:;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (double)interval;
- (long long)worldAlignment;
- (unsigned long long)providedDataTypes;
- (void)waitForOutstandingCallbacks;
- (double)preferredInterval;
- (id)initWithMotionManager:alignment:;
- (void)changeReferenceFrame:;
- (void)handleDeviceMotionUpdateWithMotion:error:;
@end
