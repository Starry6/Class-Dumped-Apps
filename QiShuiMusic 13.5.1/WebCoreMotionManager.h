@interface WebCoreMotionManager : NSObject
- (id)init;
- (void)dealloc;
- (BOOL)headingAvailable;
- (void).cxx_destruct;
- (void)update;
- (id).cxx_construct;
- (BOOL)gyroAvailable;
- (void)initializeOnMainThread;
- (void)addMotionClient:;
- (void)removeMotionClient:;
- (void)addOrientationClient:;
- (void)removeOrientationClient:;
- (void)checkClientStatus;
- (void)sendAccelerometerData:;
- (void)sendMotionData:withHeading:;
+ (id)sharedManager;
@end
