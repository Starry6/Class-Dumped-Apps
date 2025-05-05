@interface MTLTargetDeviceArchitecture : NSObject
@property (nonatomic) I cpuType;
@property (nonatomic) I subType;
@property (nonatomic) {MTLTargetDeviceArchVersion=SCC} version;
@property (nonatomic) I versionCombined;
@property (nonatomic) Q driverVersion;
- (id)init;
- (void)setVersion:;
- (id)version;
- (void)setDriverVersion:;
- (unsigned long long)driverVersion;
- (unsigned int)cpuType;
- (void)setCpuType:;
- (unsigned int)subType;
- (void)setSubType:;
- (unsigned int)versionCombined;
@end
