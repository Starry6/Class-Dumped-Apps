@interface CSJAccelerometerMotionManager : NSObject
@property (nonatomic) NSMapTable managerContainer;
@property (nonatomic) NSOperationQueue updatesQueue;
- (BOOL)accelerometerActiveWithScence:;
- (id)getMotionManagerWithScence:;
- (id)managerContainer;
- (void)outputAccelertionData:configuration:acceleroMotionAction:;
- (void)setManagerContainer:;
- (void)setUpdatesQueue:;
- (void)startAccelerometerWithConfiguration:acceleroMotionAction:;
- (void)stopAccelerometerWithScence:;
- (void)stopAllAccelerometer;
- (id)updatesQueue;
- (BOOL)validOppositeDirectionMotionWithAcceleration:configuration:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
