@interface BDXBridgeMotionManager : NSObject
@property (nonatomic) CMMotionManager motionManager;
@property (nonatomic) BDXBridgeEventCenter eventCenter;
@property (nonatomic) NSHashTable refUsage;
- (id)eventCenter;
- (id)refUsage;
- (void)setRefUsage:;
- (void)startGyroUpdates:forTarget:;
- (void)stopGyroUpdatesForTarget:;
- (id)init;
- (void).cxx_destruct;
- (void)stopGyroUpdates;
- (id)motionManager;
+ (id)sharedMotionManager;
@end
