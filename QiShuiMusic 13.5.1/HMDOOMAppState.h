@interface HMDOOMAppState : NSObject
@property (nonatomic) BOOL isNewData;
@property (nonatomic) BOOL isAppEnterBackground;
@property (nonatomic) BOOL isAppQuitByExit;
@property (nonatomic) BOOL isAppQuitByUser;
@property (nonatomic) BOOL isMonitorStopped;
@property (nonatomic) Q memoryPressure;
@property (nonatomic) double memoryPressureTimestamp;
@property (nonatomic) BOOL isCrash;
@property (nonatomic) BOOL isWatchDog;
@property (nonatomic) double enterForegoundTime;
@property (nonatomic) double enterBackgoundTime;
@property (nonatomic) double latestTime;
@property (nonatomic) NSString internalSessionID;
@property (nonatomic) double appStartTime;
@property (nonatomic) BOOL isDebug;
@property (nonatomic) BOOL isXCTest;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString buildVersion;
@property (nonatomic) NSString sysVersion;
@property (nonatomic) NSString libraryPath;
@property (nonatomic) Q exception_main_address;
@property (nonatomic) BOOL isSlardarMallocInuse;
@property (nonatomic) Q slardarMallocUsageSize;
@property (nonatomic) {?=dQQQQQQQ} memoryInfo;
@property (nonatomic) NSInteger appContinuousQuitTimes;
@property (nonatomic) NSString thermalState;
@property (nonatomic) BOOL isWeakWatchDog;
@property (nonatomic) BOOL isCPUException;
@property (nonatomic) double lastSenceChangedTime;
- (BOOL)isAppQuitByUser;
- (BOOL)isAppQuitByExit;
- (int)appContinuousQuitTimes;
- (double)appStartTime;
- (double)enterBackgoundTime;
- (double)enterForegoundTime;
- (double)enterForgoundTime;
- (unsigned long long)exception_main_address;
- (id)internalSessionID;
- (BOOL)isAppEnterBackground;
- (BOOL)isCPUException;
- (BOOL)isMonitorStopped;
- (BOOL)isNewData;
- (BOOL)isSlardarMallocInuse;
- (BOOL)isWatchDog;
- (BOOL)isWeakWatchDog;
- (double)lastSenceChangedTime;
- (double)latestTime;
- (unsigned long long)memoryPressure;
- (double)memoryPressureTimestamp;
- (void)setAppContinuousQuitTimes:;
- (void)setAppStartTime:;
- (void)setEnterBackgoundTime:;
- (void)setEnterForegoundTime:;
- (void)setEnterForegroundTime:;
- (void)setException_main_address:;
- (void)setInternalSessionID:;
- (void)setIsAppEnterBackground:;
- (void)setIsAppQuitByExit:;
- (void)setIsAppQuitByUser:;
- (void)setIsCPUException:;
- (void)setIsCrash:;
- (void)setIsMonitorStopped:;
- (void)setIsNewData:;
- (void)setIsSlardarMallocInuse:;
- (void)setIsWatchDog:;
- (void)setIsWeakWatchDog:;
- (void)setIsXCTest:;
- (void)setLastSenceChangedTime:;
- (void)setLatestTime:;
- (void)setMemoryInfo:;
- (void)setMemoryPressure:;
- (void)setMemoryPressureTimestamp:;
- (void)setSlardarMallocUsageSize:;
- (void)setSysVersion:;
- (unsigned long long)slardarMallocUsageSize;
- (id)sysVersion;
- (void)update:msync:;
- (id)memoryInfo;
- (void)setAppVersion:;
- (void)setBuildVersion:;
- (id)buildVersion;
- (id)appVersion;
- (void)update:;
- (id)libraryPath;
- (BOOL)isCrash;
- (id)thermalState;
- (BOOL)isDebug;
- (void)setThermalState:;
- (void)setLibraryPath:;
- (void)setIsDebug:;
- (BOOL)isXCTest;
+ (id)infoPath;
+ (id)sharedInstance;
@end
