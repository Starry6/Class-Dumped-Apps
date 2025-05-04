@interface AWEPOIBDXMotionManager : NSObject
@property (nonatomic) CMMotionManager motionManager;
@property (nonatomic) BDXBridgeEventCenter eventCenter;
@property (nonatomic) NSHashTable refUsage;
- (id)eventCenter;
- (id)refUsage;
- (void)startGyroUpdates:forTarget:;
- (void)stopGyroUpdatesForTarget:;
- (void)setRefUsage:;
- (id)init;
- (void)stopGyroUpdates;
- (void).cxx_destruct;
- (id)motionManager;
+ (id)sharedMotionManager;
@end
