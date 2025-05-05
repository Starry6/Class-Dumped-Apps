@interface HMDCPUExceptionThermalMonitor : NSObject
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL isThermalAbnormal;
@property (nonatomic) Q currentThermalState;
@property (nonatomic) Q abnormalThermalState;
@property (nonatomic) <HMDCPUExceptionThermalMonitorDelegate> delegate;
- (void)hmdDeviceTheramlStateDidChange:;
- (unsigned long long)abnormalThermalState;
- (unsigned long long)currentThermalState;
- (void)enterThermalMonitorLevel:;
- (BOOL)isThermalAbnormal;
- (void)registThermalNotification;
- (void)setAbnormalThermalState:;
- (void)setCurrentThermalState:;
- (void)setIsThermalAbnormal:;
- (void)unRegistThermalNotification;
- (id)init;
- (void)dealloc;
- (void)start;
- (void)setDelegate:;
- (void)setRunning:;
- (BOOL)running;
- (void)stop;
- (id)delegate;
- (void).cxx_destruct;
@end
