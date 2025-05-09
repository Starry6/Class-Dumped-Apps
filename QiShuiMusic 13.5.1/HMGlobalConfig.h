@interface HMGlobalConfig : NSObject
@property (nonatomic) NSString rootDir;
@property (nonatomic) NSString hostAid;
@property (nonatomic) NSString heimdallrAid;
@property (nonatomic) NSString zstdDictPath;
@property (nonatomic) NSString quotaDictPath;
@property (nonatomic) @? encryptBlock;
@property (nonatomic) NSDictionary reportCommonParams;
@property (nonatomic) @? reportCommonParamsBlock;
@property (nonatomic) NSDictionary reportHeaderLowLevelParams;
@property (nonatomic) NSDictionary reportHeaderConstantParams;
@property (nonatomic) double cleanupInterval;
@property (nonatomic) @? memoryBlock;
@property (nonatomic) @? memoryLimitBlock;
@property (nonatomic) @? virtualMemoryBlock;
@property (nonatomic) @? totalVirtualMemoryBlock;
@property (nonatomic) @? sequenceCodeGenerator;
@property (nonatomic) @? deviceIdRequestBlock;
@property (nonatomic) NSString devicePerformance;
@property (nonatomic) BOOL heimdallrInitCompleted;
@property (nonatomic) @? useURLSessionUploadBlock;
@property (nonatomic) @? stopWriteToDiskWhenUnhitBlock;
@property (nonatomic) Q maxStoreSize;
@property (nonatomic) double maxStoreTime;
@property (nonatomic) Q maxFileSize;
@property (nonatomic) Q maxLogNumber;
@property (nonatomic) Q maxReportSize;
@property (nonatomic) double reportInterval;
@property (nonatomic) Q limitReportSize;
@property (nonatomic) double limitReportInterval;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)cleanupInterval;
- (id)hostAid;
- (unsigned long long)limitReportSize;
- (void)setMemoryBlock:;
- (id)deviceIdRequestBlock;
- (id)devicePerformance;
- (id)encryptBlock;
- (id)heimdallrAid;
- (BOOL)heimdallrInitCompleted;
- (double)limitReportInterval;
- (unsigned long long)maxLogNumber;
- (unsigned long long)maxReportSize;
- (unsigned long long)maxStoreSize;
- (double)maxStoreTime;
- (id)memoryBlock;
- (id)memoryLimitBlock;
- (id)quotaDictPath;
- (id)reportCommonParams;
- (id)reportCommonParamsBlock;
- (id)reportHeaderConstantParams;
- (id)reportHeaderLowLevelParams;
- (double)reportInterval;
- (id)sequenceCodeGenerator;
- (void)setCleanupInterval:;
- (void)setDeviceIdRequestBlock:;
- (void)setDevicePerformance:;
- (void)setEncryptBlock:;
- (void)setHeimdallrAid:;
- (void)setHeimdallrInitCompleted:;
- (void)setHostAid:;
- (void)setLimitReportInterval:;
- (void)setLimitReportSize:;
- (void)setMaxLogNumber:;
- (void)setMaxReportSize:;
- (void)setMaxStoreSize:;
- (void)setMaxStoreTime:;
- (void)setMemoryLimitBlock:;
- (void)setQuotaDictPath:;
- (void)setReportCommonParams:;
- (void)setReportCommonParamsBlock:;
- (void)setReportHeaderConstantParams:;
- (void)setReportHeaderLowLevelParams:;
- (void)setReportInterval:;
- (void)setSequenceCodeGenerator:;
- (void)setStopWriteToDiskWhenUnhitBlock:;
- (void)setTotalVirtualMemoryBlock:;
- (void)setUseURLSessionUploadBlock:;
- (void)setVirtualMemoryBlock:;
- (void)setZstdDictPath:;
- (id)stopWriteToDiskWhenUnhitBlock;
- (id)totalVirtualMemoryBlock;
- (id)useURLSessionUploadBlock;
- (id)virtualMemoryBlock;
- (id)zstdDictPath;
- (unsigned long long)maxFileSize;
- (void)setRootDir:;
- (id)rootDir;
- (void).cxx_destruct;
- (void)setMaxFileSize:;
@end
