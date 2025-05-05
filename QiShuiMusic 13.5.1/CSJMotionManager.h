@interface CSJMotionManager : NSObject
@property (nonatomic) NSMapTable managerContainer;
@property (nonatomic) NSHashTable twistHashTable;
@property (nonatomic) q sequence;
- (id)getSuccessModel;
- (id)getUnavailableModel;
- (void)handleAccelerometerObserverWithMotionModel:model:;
- (void)handleGyroObserverWithMotionModel:model:;
- (id)managerContainer;
- (id)motionScenceWithMotionModel:;
- (void)setManagerContainer:;
- (void)setTwistHashTable:;
- (void)shakeObserverCallBackWithKey:containerView:;
- (id)startAccelerometerObserverInterval:motionModel:;
- (id)startGyroObserverInterval:motionModel:;
- (id)startShakeObserverMotionModel:shakeAmplitude:calculateSize:;
- (id)startTwistObserverWithMaterialMeta:motionModel:;
- (id)stopAccelerometerObserverWithMotionModel:;
- (id)stopGyroObserverObserverWithMotionModel:;
- (id)stopShakeObserverWithMotionModel:;
- (id)stopTwistObserverWithMotionModel:;
- (id)twistHashTable;
- (void)twistObserverCallBack:;
- (id)init;
- (void)setSequence:;
- (void).cxx_destruct;
- (long long)sequence;
+ (id)sharedInstance;
@end
