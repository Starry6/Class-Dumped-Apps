@interface BUPLMotionManager : NSObject
@property (nonatomic) NSMapTable managerContainer;
@property (nonatomic) NSHashTable hashTable;
- (void)handleAccelerometerNoGravityObserverWithPlayableAd:model:;
- (void)handleAccelerometerObserverWithPlayableAd:model:;
- (void)handleGyroObserverWithPlayableAd:model:;
- (void)handleRotationRateObserverWithPlayableAd:model:;
- (id)hashTable;
- (id)managerContainer;
- (void)setHashTable:;
- (void)setManagerContainer:;
- (id)startAccelerometerNoGravityObserverInterval:playableAd:;
- (id)startAccelerometerObserverInterval:playableAd:;
- (id)startDeviceMotionUpdatesWithInterval:playableAd:withHandler:;
- (id)startGyroObserverInterval:playableAd:;
- (id)startRotationRateObserverInterval:playableAd:;
- (id)stopAccelerometerNoGravityObserverWithPlayableAd:;
- (id)stopAccelerometerObserverWithPlayableAd:;
- (id)stopDeviceMotionUpdatesWithPlayableAd:;
- (id)stopGyroObserverObserverWithPlayableAd:;
- (id)stopRotationRateObserverWithPlayableAd:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
