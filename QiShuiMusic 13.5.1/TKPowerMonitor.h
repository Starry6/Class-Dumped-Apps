@interface TKPowerMonitor : NSObject
@property (nonatomic) I kernelPort;
@property (nonatomic) BOOL awaken;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)kernelPort;
- (void)setKernelPort:;
- (BOOL)awaken;
- (void)setAwaken:;
+ (id)defaultMonitor;
@end
