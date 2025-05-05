@interface VCCoreMotionManager : NSObject
@property (nonatomic) CMMotionActivity motionActivity;
- (void)dealloc;
- (id)motionActivity;
- (void)setMotionActivity:;
- (id)initWithDelegate:;
- (id)coreMotionManagerDelegate;
- (void)setCoreMotionManagerDelegate:;
- (void)startMonitoringMotionActivity;
- (void)stopMonitoringMotionActivity;
- (unsigned char)getMotionActivityValueForMotionActivity:;
@end
