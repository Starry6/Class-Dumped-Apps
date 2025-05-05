@interface BEFBuildInMotionManager : NSObject
@property (nonatomic) @? block;
@property (nonatomic) NSObject<OS_dispatch_queue> blockUpdateQueue;
- (id)blockUpdateQueue;
- (void)setBlockUpdateQueue:;
- (void)startDetectDeviceMotion:;
- (void)stopDetectDeviceMotion;
- (id)block;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setBlock:;
- (id).cxx_construct;
@end
