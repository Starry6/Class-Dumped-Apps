@interface HMDOOMCrashInfo : NSObject
@property (nonatomic) Q memoryPressure;
@property (nonatomic) double memoryPressureTimestamp;
@property (nonatomic) double enterForegoundTime;
@property (nonatomic) double enterBackgoundTime;
@property (nonatomic) double latestTime;
@property (nonatomic) NSString internalSessionID;
@property (nonatomic) double appStartTime;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString buildVersion;
@property (nonatomic) NSString sysVersion;
@property (nonatomic) {?=dQQQQQQQ} memoryInfo;
@property (nonatomic) double updateTime;
@property (nonatomic) NSString lastScene;
@property (nonatomic) NSDictionary operationTrace;
@property (nonatomic) double freeDisk;
@property (nonatomic) q freeDiskBlockSize;
@property (nonatomic) NSString sessionID;
@property (nonatomic) Q exception_main_address;
@property (nonatomic) NSString loginfo;
@property (nonatomic) BOOL isSlardarMallocInuse;
@property (nonatomic) Q slardarMallocUsageSize;
@property (nonatomic) BOOL isMemoryDumpInterrupt;
@property (nonatomic) NSString detailInfo;
@property (nonatomic) NSInteger appContinuousQuitTimes;
@property (nonatomic) NSString thermalState;
@property (nonatomic) BOOL isCPUException;
@property (nonatomic) double inAppTime;
@property (nonatomic) double inLastSceneTime;
@property (nonatomic) double restartInterval;
@property (nonatomic) NSString binaryInfo;
- (double)inLastSceneTime;
- (id)loginfo;
- (double)restartInterval;
- (int)appContinuousQuitTimes;
- (double)appStartTime;
- (id)binaryInfo;
- (id)detailInfo;
- (double)enterBackgoundTime;
- (double)enterForegoundTime;
- (unsigned long long)exception_main_address;
- (double)freeDisk;
- (long long)freeDiskBlockSize;
- (double)inAppTime;
- (id)initWithAppState:extraDict:;
- (id)internalSessionID;
- (BOOL)isCPUException;
- (BOOL)isMemoryDumpInterrupt;
- (BOOL)isSlardarMallocInuse;
- (double)latestTime;
- (unsigned long long)memoryPressure;
- (double)memoryPressureTimestamp;
- (id)operationTrace;
- (void)setAppContinuousQuitTimes:;
- (void)setAppStartTime:;
- (void)setBinaryInfo:;
- (void)setDetailInfo:;
- (void)setEnterBackgoundTime:;
- (void)setEnterForegoundTime:;
- (void)setException_main_address:;
- (void)setFreeDisk:;
- (void)setFreeDiskBlockSize:;
- (void)setInAppTime:;
- (void)setInLastSceneTime:;
- (void)setInternalSessionID:;
- (void)setIsCPUException:;
- (void)setIsMemoryDumpInterrupt:;
- (void)setIsSlardarMallocInuse:;
- (void)setLastScene:;
- (void)setLatestTime:;
- (void)setLoginfo:;
- (void)setMemoryInfo:;
- (void)setMemoryPressure:;
- (void)setMemoryPressureTimestamp:;
- (void)setOperationTrace:;
- (void)setRestartInterval:;
- (void)setSlardarMallocUsageSize:;
- (void)setSysVersion:;
- (unsigned long long)slardarMallocUsageSize;
- (id)sysVersion;
- (id)memoryInfo;
- (void)setSessionID:;
- (void)setAppVersion:;
- (void)setBuildVersion:;
- (id)buildVersion;
- (id)sessionID;
- (id)appVersion;
- (void).cxx_destruct;
- (id)lastScene;
- (double)updateTime;
- (id)thermalState;
- (void)setUpdateTime:;
- (void)setThermalState:;
@end
