@interface HARDefaultMotionDataProvider : NSObject
@property (nonatomic) CMMotionManager motionManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)gyroData;
- (id)init;
- (BOOL)isGyroAvailable;
- (void)stopAccelerometerUpdates;
- (BOOL)isAccelerometerAvailable;
- (id)accelerometerData;
- (void).cxx_destruct;
- (void)startAccelerometerUpdates;
- (void)stopGyroUpdates;
- (void)startGyroUpdates;
- (id)motionManager;
- (void)setMotionManager:;
@end
