@interface BDARShakeManager : NSObject
@property (nonatomic) CMMotionManager manager;
@property (nonatomic) <BDARShakeDelegate> delegate;
@property (nonatomic) double accelerometer;
@property (nonatomic) BOOL isMonitor;
- (BOOL)isMonitor;
- (void)setIsMonitor:;
- (void)startShakeMonitor;
- (void)stopShakeMonitor;
- (id)init;
- (void)setDelegate:;
- (id)manager;
- (void)setManager:;
- (id)delegate;
- (void).cxx_destruct;
- (double)accelerometer;
- (void)setAccelerometer:;
+ (id)sharedInstance;
@end
