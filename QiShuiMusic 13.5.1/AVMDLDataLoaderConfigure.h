@interface AVMDLDataLoaderConfigure : NSObject
@property (nonatomic) q maxCacheSize;
@property (nonatomic) q openTimeOut;
@property (nonatomic) q rwTimeOut;
@property (nonatomic) q tryCount;
@property (nonatomic) q preloadParallelNum;
@property (nonatomic) q isEnableExternDNS;
@property (nonatomic) q isEnableSoccketReuse;
@property (nonatomic) q socketIdleTimeout;
@property (nonatomic) q checksumLevel;
@property (nonatomic) q maxCacheAge;
@property (nonatomic) NSString cachDirectory;
@property (nonatomic) q isEnableLazyBufferpool;
@property (nonatomic) q ringBufferSize;
@property (nonatomic) q isEnableAuth;
@property (nonatomic) NSString downloadDir;
@property (nonatomic) NSString mdlExtensionOpts;
@property (nonatomic) NSString n80Config;
@property (nonatomic) q writeFileNotifyIntervalMS;
@property (nonatomic) q forbidByPassCookie;
@property (nonatomic) q enablePreconnect;
@property (nonatomic) q preconnectNum;
@property (nonatomic) q testSpeedVersion;
@property (nonatomic) q isEnableLoaderPreempt;
@property (nonatomic) q nextDownloadThreshold;
@property (nonatomic) q accessCheckLevel;
@property (nonatomic) q isEnableSessionReuse;
@property (nonatomic) q maxTlsVersion;
@property (nonatomic) q sessionTimeout;
@property (nonatomic) q maxIPV4Count;
@property (nonatomic) q maxIPV6Count;
@property (nonatomic) q isEnableNewBufferpool;
@property (nonatomic) q newBufferpoolBlockSize;
@property (nonatomic) q newBufferpoolResidentSize;
@property (nonatomic) q newBufferpoolGrowBlockCount;
@property (nonatomic) q isEnableAlog;
@property (nonatomic) q isEnableCacheReqRange;
@property (nonatomic) q isEnablePlayLog;
@property (nonatomic) q isAllowTryTheLastUrl;
@property (nonatomic) q isEnableFileExtendBuffer;
@property (nonatomic) q isEnableIOManager;
@property (nonatomic) q isEnableNetScheduler;
@property (nonatomic) q isNetSchedulerBlockAllNetErr;
@property (nonatomic) q netSchedulerBlockErrCount;
@property (nonatomic) q netSchedulerBlockDuration;
@property (nonatomic) q netSchedulerBlockHostErrIpCount;
@property (nonatomic) BOOL isEnableLocalDNSThreadOptimize;
@property (nonatomic) q connectPoolStragetyValue;
@property (nonatomic) q maxAliveHostNum;
@property (nonatomic) q maxSocketReuseCount;
@property (nonatomic) q fileExtendSizeKB;
@property (nonatomic) q isEnableFixCancelPreload;
@property (nonatomic) BOOL isEnableDNSNoLockNotify;
@property (nonatomic) q isEnableEarlyData;
@property (nonatomic) NSString socketTrainingCenterConfigStr;
@property (nonatomic) NSString netSchedulerConfigStr;
@property (nonatomic) NSString dynamicPreconnectConfigStr;
@property (nonatomic) NSString temporaryOptStr;
@property (nonatomic) NSString fileBufferOptStr;
@property (nonatomic) NSString customUA;
@property (nonatomic) NSString vendorTestId;
@property (nonatomic) NSString vendorGroupId;
@property (nonatomic) NSDictionary cacheDirMaxCacheSize;
@property (nonatomic) q mUseNewSpeedTestForSingle;
@property (nonatomic) q socketRecvBufferSize;
@property (nonatomic) BOOL isEnableReqWaitNetReachable;
@property (nonatomic) BOOL isEnableNetworkChangeNotify;
@property (nonatomic) BOOL isEnableMaxCacheAgeForAllDir;
@property (nonatomic) q maxFileMemCacheSize;
@property (nonatomic) q maxFileMemCacheNum;
@property (nonatomic) BOOL isEnableCellularUp;
@property (nonatomic) q loadMonitorTimeInternal;
@property (nonatomic) q loadMonitorMinAllowLoadSize;
@property (nonatomic) q loaderType;
@property (nonatomic) NSString appInfo;
@property (nonatomic) q isEnableUseOriginalUrl;
@property (nonatomic) BOOL isEnableLoaderLogExtractUrls;
@property (nonatomic) q maxLoaderLogNum;
@property (nonatomic) q threadStackSizeLevel;
@property (nonatomic) BOOL isEnableUnLimitHttpHeader;
@property (nonatomic) q enableThreadPoolCheckIdle;
@property (nonatomic) q threadPoolIdleTTLSecond;
@property (nonatomic) q threadPoolMinCount;
@property (nonatomic) BOOL isEnableHls;
@property (nonatomic) BOOL nonBlockRangeMode;
@property (nonatomic) q nonBlockRnageMaxSizeKB;
@property (nonatomic) q enableFileMutexOptimize;
@property (nonatomic) BOOL isEnableMDL2;
@property (nonatomic) q skipCdnUrlBeforeExpireSec;
@property (nonatomic) q preloadTraceIdRecordMaxCnt;
@property (nonatomic) BOOL ignoreTextSpeedTest;
@property (nonatomic) BOOL isEnableOptimizeRange;
@property (nonatomic) q getCookieTokenLevel;
@property (nonatomic) BOOL isEnableUseGroupId;
@property (nonatomic) q enableStorageModule;
@property (nonatomic) NSString stoStrategyConfig;
@property (nonatomic) q isEnablePcdnAuto;
@property (nonatomic) q isCloseLocalServer;
@property (nonatomic) q sessionCacheIntervalMs;
@property (nonatomic) q fileManagerIntervalMs;
@property (nonatomic) NSArray protectCacheDirsAvoidClean;
@property (nonatomic) NSString precisePreloadConfigStr;
@property (nonatomic) BOOL m3uTsKeyUseAbsoluteUrl;
- (id)cacheDirListStr;
- (long long)maxLoaderLogNum;
- (void)setIsEnableHls:;
- (id)temporaryOptStr;
- (long long)isEnablePlayLog;
- (long long)maxAliveHostNum;
- (long long)netSchedulerBlockHostErrIpCount;
- (void)setDownloadDir:;
- (void)setIsEnableNetworkChangeNotify:;
- (void)setIsEnableReqWaitNetReachable:;
- (void)setLoadMonitorMinAllowLoadSize:;
- (void)setNewBufferpoolGrowBlockCount:;
- (void)setOpenTimeOut:;
- (long long)accessCheckLevel;
- (id)cachDirectory;
- (id)cacheDirMaxCacheSize;
- (long long)checksumLevel;
- (long long)connectPoolStragetyValue;
- (id)customUA;
- (id)downloadDir;
- (id)dynamicPreconnectConfigStr;
- (long long)enableFileMutexOptimize;
- (long long)enablePreconnect;
- (long long)enableStorageModule;
- (long long)enableThreadPoolCheckIdle;
- (id)fileBufferOptStr;
- (long long)fileExtendSizeKB;
- (long long)fileManagerIntervalMs;
- (long long)forbidByPassCookie;
- (long long)getCookieTokenLevel;
- (BOOL)ignoreTextSpeedTest;
- (long long)isAllowTryTheLastUrl;
- (long long)isCloseLocalServer;
- (long long)isEnableAlog;
- (long long)isEnableAuth;
- (long long)isEnableCacheReqRange;
- (BOOL)isEnableCellularUp;
- (BOOL)isEnableDNSNoLockNotify;
- (long long)isEnableEarlyData;
- (long long)isEnableExternDNS;
- (long long)isEnableFileExtendBuffer;
- (long long)isEnableFixCancelPreload;
- (BOOL)isEnableHls;
- (long long)isEnableIOManager;
- (long long)isEnableLazyBufferpool;
- (BOOL)isEnableLoaderLogExtractUrls;
- (long long)isEnableLoaderPreempt;
- (BOOL)isEnableLocalDNSThreadOptimize;
- (BOOL)isEnableMDL2;
- (BOOL)isEnableMaxCacheAgeForAllDir;
- (long long)isEnableNetScheduler;
- (BOOL)isEnableNetworkChangeNotify;
- (long long)isEnableNewBufferpool;
- (BOOL)isEnableOptimizeRange;
- (long long)isEnablePcdnAuto;
- (BOOL)isEnableReqWaitNetReachable;
- (long long)isEnableSessionReuse;
- (long long)isEnableSoccketReuse;
- (BOOL)isEnableUnLimitHttpHeader;
- (BOOL)isEnableUseGroupId;
- (long long)isEnableUseOriginalUrl;
- (long long)isNetSchedulerBlockAllNetErr;
- (long long)loadMonitorMinAllowLoadSize;
- (long long)loadMonitorTimeInternal;
- (long long)loaderType;
- (BOOL)m3uTsKeyUseAbsoluteUrl;
- (long long)mUseNewSpeedTestForSingle;
- (long long)maxFileMemCacheNum;
- (long long)maxFileMemCacheSize;
- (long long)maxIPV4Count;
- (long long)maxIPV6Count;
- (long long)maxSocketReuseCount;
- (long long)maxTlsVersion;
- (id)mdlExtensionOpts;
- (id)n80Config;
- (long long)netSchedulerBlockDuration;
- (long long)netSchedulerBlockErrCount;
- (id)netSchedulerConfigStr;
- (long long)newBufferpoolBlockSize;
- (long long)newBufferpoolGrowBlockCount;
- (long long)newBufferpoolResidentSize;
- (long long)nextDownloadThreshold;
- (BOOL)nonBlockRangeMode;
- (long long)nonBlockRnageMaxSizeKB;
- (long long)openTimeOut;
- (id)precisePreloadConfigStr;
- (long long)preconnectNum;
- (long long)preloadParallelNum;
- (long long)preloadTraceIdRecordMaxCnt;
- (id)protectCacheDirsAvoidClean;
- (id)protectCacheDirsStr;
- (long long)rwTimeOut;
- (long long)sessionCacheIntervalMs;
- (void)setAccessCheckLevel:;
- (void)setCachDirectory:;
- (void)setCacheDirMaxCacheSize:;
- (void)setChecksumLevel:;
- (void)setConnectPoolStragetyValue:;
- (void)setCustomUA:;
- (void)setDynamicPreconnectConfigStr:;
- (void)setEnableFileMutexOptimize:;
- (void)setEnablePreconnect:;
- (void)setEnableStorageModule:;
- (void)setEnableThreadPoolCheckIdle:;
- (void)setFileBufferOptStr:;
- (void)setFileExtendSizeKB:;
- (void)setFileManagerIntervalMs:;
- (void)setForbidByPassCookie:;
- (void)setGetCookieTokenLevel:;
- (void)setIgnoreTextSpeedTest:;
- (void)setIsAllowTryTheLastUrl:;
- (void)setIsCloseLocalServer:;
- (void)setIsEnableAlog:;
- (void)setIsEnableAuth:;
- (void)setIsEnableCacheReqRange:;
- (void)setIsEnableCellularUp:;
- (void)setIsEnableDNSNoLockNotify:;
- (void)setIsEnableEarlyData:;
- (void)setIsEnableExternDNS:;
- (void)setIsEnableFileExtendBuffer:;
- (void)setIsEnableFixCancelPreload:;
- (void)setIsEnableIOManager:;
- (void)setIsEnableLazyBufferpool:;
- (void)setIsEnableLoaderLogExtractUrls:;
- (void)setIsEnableLoaderPreempt:;
- (void)setIsEnableLocalDNSThreadOptimize:;
- (void)setIsEnableMDL2:;
- (void)setIsEnableMaxCacheAgeForAllDir:;
- (void)setIsEnableNetScheduler:;
- (void)setIsEnableNewBufferpool:;
- (void)setIsEnableOptimizeRange:;
- (void)setIsEnablePcdnAuto:;
- (void)setIsEnablePlayLog:;
- (void)setIsEnableSessionReuse:;
- (void)setIsEnableSoccketReuse:;
- (void)setIsEnableUnLimitHttpHeader:;
- (void)setIsEnableUseGroupId:;
- (void)setIsEnableUseOriginalUrl:;
- (void)setIsNetSchedulerBlockAllNetErr:;
- (void)setLoadMonitorTimeInternal:;
- (void)setLoaderType:;
- (void)setM3uTsKeyUseAbsoluteUrl:;
- (void)setMUseNewSpeedTestForSingle:;
- (void)setMaxAliveHostNum:;
- (void)setMaxFileMemCacheNum:;
- (void)setMaxFileMemCacheSize:;
- (void)setMaxIPV4Count:;
- (void)setMaxIPV6Count:;
- (void)setMaxLoaderLogNum:;
- (void)setMaxSocketReuseCount:;
- (void)setMaxTlsVersion:;
- (void)setMdlExtensionOpts:;
- (void)setN80Config:;
- (void)setNetSchedulerBlockDuration:;
- (void)setNetSchedulerBlockErrCount:;
- (void)setNetSchedulerBlockHostErrIpCount:;
- (void)setNetSchedulerConfigStr:;
- (void)setNewBufferpoolBlockSize:;
- (void)setNewBufferpoolResidentSize:;
- (void)setNextDownloadThreshold:;
- (void)setNonBlockRangeMode:;
- (void)setNonBlockRnageMaxSizeKB:;
- (void)setPrecisePreloadConfigStr:;
- (void)setPreconnectNum:;
- (void)setPreloadParallelNum:;
- (void)setPreloadTraceIdRecordMaxCnt:;
- (void)setProtectCacheDirsAvoidClean:;
- (void)setRingBufferSize:;
- (void)setRwTimeOut:;
- (void)setSessionCacheIntervalMs:;
- (void)setSkipCdnUrlBeforeExpireSec:;
- (void)setSocketIdleTimeout:;
- (void)setSocketRecvBufferSize:;
- (void)setSocketTrainingCenterConfigStr:;
- (void)setStoStrategyConfig:;
- (void)setTemporaryOptStr:;
- (void)setTestSpeedVersion:;
- (void)setThreadPoolIdleTTLSecond:;
- (void)setThreadPoolMinCount:;
- (void)setThreadStackSizeLevel:;
- (void)setVendorGroupId:;
- (void)setVendorTestId:;
- (void)setWriteFileNotifyIntervalMS:;
- (long long)skipCdnUrlBeforeExpireSec;
- (long long)socketIdleTimeout;
- (long long)socketRecvBufferSize;
- (id)socketTrainingCenterConfigStr;
- (id)stoStrategyConfig;
- (long long)testSpeedVersion;
- (long long)threadPoolIdleTTLSecond;
- (long long)threadPoolMinCount;
- (long long)threadStackSizeLevel;
- (id)vendorGroupId;
- (id)vendorTestId;
- (long long)writeFileNotifyIntervalMS;
- (id)appInfo;
- (long long)maxCacheAge;
- (void).cxx_destruct;
- (void)setMaxCacheAge:;
- (long long)tryCount;
- (void)setTryCount:;
- (void)setAppInfo:;
- (long long)maxCacheSize;
- (void)setMaxCacheSize:;
- (long long)ringBufferSize;
- (long long)sessionTimeout;
- (void)setSessionTimeout:;
+ (id)defaultConfigure;
@end
