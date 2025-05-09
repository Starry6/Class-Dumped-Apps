@interface LSLiveDeviceMotion : NSObject
@property (nonatomic) CMMotionManager motionManager;
@property (nonatomic) CMAttitude attitude;
@property (nonatomic) q deviceOrientation;
@property (nonatomic) q motionDetectCount;
@property (nonatomic) NSObject<OS_dispatch_queue> operationQueue;
@property (nonatomic) BOOL disableOrienrationDetecttion;
- (void)calculateOrientation:;
- (void)closeARMode;
- (BOOL)disableOrienrationDetecttion;
- (void)getQuaternion:size:;
- (long long)motionDetectCount;
- (void)openARMode;
- (void)runAsync:;
- (void)runSync:;
- (void)setMotionDetectCount:;
- (void)startDetectDeviceMotion;
- (void)stopDetectDeviceMotion;
- (void)setDisableOrienrationDetecttion:;
- (void)setDeviceOrientation:;
- (id)init;
- (id)operationQueue;
- (id)attitude;
- (long long)deviceOrientation;
- (void).cxx_destruct;
- (void)setOperationQueue:;
- (void)setAttitude:;
- (id)motionManager;
- (void)setMotionManager:;
+ (id)sharedInstance;
@end
