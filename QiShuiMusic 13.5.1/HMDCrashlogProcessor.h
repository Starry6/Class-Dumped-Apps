@interface HMDCrashlogProcessor : NSObject
@property (nonatomic) BOOL needEncrypt;
@property (nonatomic) double launchCrashThreshold;
@property (nonatomic) HMDCrashReportInfo crashReport;
- (void)setCrashReport:;
- (void)setNeedEncrypt:;
- (id)crashDetail:;
- (id)crashExtendFilesWithInputDir:;
- (id)crashReport;
- (BOOL)generateCrashlogWithInputDir:outputPath:;
- (double)launchCrashThreshold;
- (BOOL)needEncrypt;
- (id)postDataWithCrashInfo:;
- (id)regionDicts:;
- (id)registerAnalysis:;
- (void)setLaunchCrashThreshold:;
- (id)stackAnalysis:;
- (void)startProcess:;
- (id)zipCrashExtendWithInputDir:;
- (void).cxx_destruct;
@end
