@interface UgenShakeTriggerManager : NSObject
@property (nonatomic) NSMapTable managerContainer;
@property (nonatomic) NSOperationQueue updatesQueue;
@property (nonatomic) double amplitude;
@property (nonatomic) @? acceleroMotionAction;
@property (nonatomic) BOOL accelerometerActive;
- (id)acceleroMotionAction;
- (BOOL)accelerometerActiveWithKey:;
- (id)managerContainer;
- (void)outputAccelertionData:amplitude:key:acceleroMotionAction:;
- (void)setAcceleroMotionAction:;
- (void)setManagerContainer:;
- (void)setUpdatesQueue:;
- (void)startAccelerometerWithAmplitude:key:acceleroMotionAction:;
- (void)stopAccelerometerWithKey:;
- (id)updatesQueue;
- (id)init;
- (void)setAmplitude:;
- (void).cxx_destruct;
- (double)amplitude;
- (BOOL)accelerometerActive;
+ (id)sharedInstance;
@end
