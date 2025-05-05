@interface ARMotionSensor : NSObject
@property (nonatomic) double interval;
@property (nonatomic) <ARSensorDelegate> delegate;
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
- (unsigned long long)providedDataTypes;
- (id)initWithMotionManager:;
- (double)preferredInterval;
- (void)gyroscopeOutput:;
- (void)accelerometerOutput:;
- (void)magnetometerOutput:;
@end
