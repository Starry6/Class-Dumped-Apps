@interface CardboardSensorHelper : NSObject
@property (nonatomic) CMAccelerometerData accelerometerData;
@property (nonatomic) CMDeviceMotion deviceMotion;
@property (nonatomic) BOOL accelerometerAvailable;
@property (nonatomic) BOOL gyroAvailable;
- (void)start:callback:;
- (void)invokeBlock:withLock:;
- (void)setAccelerometerData:;
- (void)stop:callback:;
- (id)init;
- (BOOL)isGyroAvailable;
- (BOOL)isAccelerometerAvailable;
- (id)accelerometerData;
- (id)deviceMotion;
- (void).cxx_destruct;
- (void)setDeviceMotion:;
+ (id)sharedSensorHelper;
@end
