@interface HMDPerformanceReporter : NSObject
@property (nonatomic) NSTimer sizeLimitedReportTimer;
@property (nonatomic) double sizeLimitAvailableTime;
@property (nonatomic) NSMutableOrderedSet performanceModules;
@property (nonatomic) HMDReportLimitSizeTool reporSizeLimitTool;
@property (nonatomic) double sizeLimitAvailableTime;
@property (nonatomic) <HMDNetworkProvider> provider;
@property (nonatomic) q reportMaxLogCount;
@property (nonatomic) double reportPollingInterval;
@property (nonatomic) double enableTimeStamp;
@property (nonatomic) NSArray allReportingModules;
@property (nonatomic) NSString sdkAid;
@property (nonatomic) BOOL isSDKReporter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)enableTimeStamp;
- (void)performanceSizeLimitReportStart;
- (id)_dataArrayForSizeLimitedReportWithAddedMoudle:modules:;
- (void)_sizeLimitedTimeAvaliableWithBody:;
- (void)addReportModuleSafe:;
- (id)allReportingModules;
- (void)autoReportPerformanceDataWithSizeLimited:;
- (void)cleanupWithConfigUnsafe:;
- (void)clearRecordCountAfterReportingSuccessfully;
- (BOOL)ifNeedReportAfterUpdatingRecordCount:;
- (BOOL)isSDKReporter;
- (void)performanceDataSizeOutOfThreshold;
- (id)performanceModules;
- (void)performanceSizeLimitReportStop;
- (void)removeReportModuleSafe:;
- (id)reporSizeLimitTool;
- (long long)reportMaxLogCount;
- (void)reportPerformanceDataAsyncWithSizeLimited;
- (double)reportPollingInterval;
- (id)sdkAid;
- (void)setEnableTimeStamp:;
- (void)setIsSDKReporter:;
- (void)setPerformanceModules:;
- (void)setReporSizeLimitTool:;
- (void)setReportMaxLogCount:;
- (void)setReportPollingInterval:;
- (void)setSdkAid:;
- (void)setSizeLimitAvailableTime:;
- (void)setSizeLimitedReportTimer:;
- (double)sizeLimitAvailableTime;
- (id)sizeLimitedReportTimer;
- (void)startSizeLimitedReportTimer;
- (void)stopSizeLimitedReportTimer;
- (void)updateConfig:;
- (void)updateEnableTimeStampAfterReporting;
- (void)setProvider:;
- (void)dealloc;
- (id)initWithProvider:;
- (id)provider;
- (void).cxx_destruct;
@end
