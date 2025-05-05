@interface MXForegroundExitData : NSObject
@property (nonatomic) Q cumulativeCPUResourceLimitExitCount;
@property (nonatomic) Q cumulativeNormalAppExitCount;
@property (nonatomic) Q cumulativeMemoryResourceLimitExitCount;
@property (nonatomic) Q cumulativeBadAccessExitCount;
@property (nonatomic) Q cumulativeAbnormalExitCount;
@property (nonatomic) Q cumulativeIllegalInstructionExitCount;
@property (nonatomic) Q cumulativeAppWatchdogExitCount;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithNormalAppExitCount:withMemoryResourceLimitExitCount:withCPUResourceLimitExitCount:withBadAccessExitCount:withAbnormalExitCount:withIllegalInstructionExitCount:withAppWatchDogExitCount:;
- (id)initWithNormalAppExitCount:memoryResourceLimitExitCount:cpuResourceLimitExitCount:badAccessExitCount:abnormalExitCount:illegalInstructionExitCount:appWatchDogExitCount:;
- (unsigned long long)cumulativeNormalAppExitCount;
- (unsigned long long)cumulativeMemoryResourceLimitExitCount;
- (unsigned long long)cumulativeBadAccessExitCount;
- (unsigned long long)cumulativeAbnormalExitCount;
- (unsigned long long)cumulativeIllegalInstructionExitCount;
- (unsigned long long)cumulativeAppWatchdogExitCount;
- (unsigned long long)cumulativeCPUResourceLimitExitCount;
+ (BOOL)supportsSecureCoding;
@end
