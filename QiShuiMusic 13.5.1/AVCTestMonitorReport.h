@interface AVCTestMonitorReport : NSObject
@property (nonatomic) Q initialMemoryUsageMB;
@property (nonatomic) Q memoryUsageMB;
@property (nonatomic) Q networkAgentRefCount;
- (unsigned long long)initialMemoryUsageMB;
- (void)setInitialMemoryUsageMB:;
- (unsigned long long)memoryUsageMB;
- (void)setMemoryUsageMB:;
- (unsigned long long)networkAgentRefCount;
- (void)setNetworkAgentRefCount:;
@end
