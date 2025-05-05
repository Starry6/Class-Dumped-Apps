@interface CSJTwistManager : NSObject
@property (nonatomic) CSJTwistMotionManager twistMotionManager;
@property (nonatomic) double rotationThreshold;
@property (nonatomic) double updateInterval;
- (void)p_startMotionManagerWithHandler:config:key:methodType:repeat:;
- (double)rotationThreshold;
- (void)setRotationThreshold:;
- (void)setTwistMotionManager:;
- (void)startTwistWithMaterialMeta:key:repeat:updatesWithHandler:;
- (void)stopTwistObserverWithKey:;
- (id)twistMotionManager;
- (double)updateInterval;
- (void)setUpdateInterval:;
- (void).cxx_destruct;
@end
