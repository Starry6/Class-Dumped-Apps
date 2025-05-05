@interface MLCPlatformInfo : NSObject
+ (id)bootArgs;
+ (id)buildVersion;
+ (BOOL)isInternalBuild;
+ (id)osVersion;
+ (id)aneSubType;
+ (long long)randomSeed;
+ (BOOL)gpuUsageUnsupported;
+ (BOOL)gpuUsageUnsupportedIncludingLowPower:;
+ (BOOL)multiGPUUsageUnsupported;
+ (BOOL)aneUsageUnsupported;
+ (id)mpsGraphConvolutionEnvVariable;
+ (BOOL)gpuUseMPSGraphConvolution;
+ (id)seedEnvVariable;
+ (BOOL)isRNGSeeded;
+ (void)setRandomSeedTo:;
+ (id)getRandomSeed;
+ (int)getMinGpuSocVersionForMicroBenchmark;
+ (int)aneSubTypeVersion;
+ (BOOL)isAneSubTypeVersionGreaterThanOrEqualTo:;
+ (id)aneKeepPlistEnvVariable;
+ (BOOL)isAnePlistKept;
+ (id)aneGraphPartitioningConfigEnvVariable;
+ (BOOL)isAneGraphPartitioningConfigSet;
+ (id)aneSaveGraphPartitioningConfig;
+ (BOOL)isAneSaveGraphPartitioningConfigSet;
@end
