@interface ToygerSensorData : NSObject
@property (nonatomic) float pitch;
@property (nonatomic) float roll;
@property (nonatomic) float yaw;
@property (nonatomic) float gyro_x;
@property (nonatomic) float gyro_y;
@property (nonatomic) float gyro_z;
@property (nonatomic) Q timestamp;
- (float)gyro_x;
- (float)gyro_y;
- (float)gyro_z;
- (void)setGyro_x:;
- (void)setGyro_y:;
- (void)setGyro_z:;
- (float)yaw;
- (void)setPitch:;
- (float)pitch;
- (float)roll;
- (void)setTimestamp:;
- (unsigned long long)timestamp;
- (void)setYaw:;
- (void)setRoll:;
@end
