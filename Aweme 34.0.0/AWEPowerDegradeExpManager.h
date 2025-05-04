@interface AWEPowerDegradeExpManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) AWEGPUDegradeMetal GPUMetal;
- (void)startTimerIfNeeded:;
- (void)onThermalStateChange:;
- (void)setCPUParameter:;
- (void)setGPUMetal:;
- (id)GPUMetal;
- (void)setGPUParameter:;
- (void)setTimer:;
- (id)init;
- (void)dealloc;
- (id)timer;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
