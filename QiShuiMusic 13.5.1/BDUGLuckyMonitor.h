@interface BDUGLuckyMonitor : NSObject
@property (nonatomic) HMDTTMonitor monitor;
- (void)setupHMDMonitor;
- (void)trackService:metric:category:extra:;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
+ (void)initializeMonitor;
+ (id)sharedInstance;
@end
