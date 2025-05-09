@interface TTDownloadTask : NSObject
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) NSArray urlLists;
@property (nonatomic) NSString fileName;
@property (nonatomic) BOOL isResume;
@property (nonatomic) BOOL isUseKey;
@property (nonatomic) c getLengthRetryMax;
@property (nonatomic) BOOL isStartDownloadingFlag;
@property (nonatomic) q throttleNetSpeed;
@property (nonatomic) DownloadResultNotification resultNotification;
@property (nonatomic) DownloadProgressInfo progressInfo;
@property (nonatomic) NSString cacheFullPath;
@property (nonatomic) NSString cacheBackupDir;
@property (nonatomic) NSInteger sliceCountHasDownloaded;
@property (nonatomic) NSInteger sliceCancelCount;
@property (nonatomic) NSInteger sliceDownloadFailedCount;
@property (nonatomic) NSMutableArray downloadSliceTaskArray;
@property (nonatomic) NSMutableArray downloadSliceBgTaskArray;
@property (nonatomic) NSMutableArray httpResponseArray;
@property (nonatomic) BOOL isDelete;
@property (nonatomic) NSObject<OS_dispatch_semaphore> getContentLengthSem;
@property (nonatomic) NSString fileMd5Value;
@property (nonatomic) q lastHadDownloadedLength;
@property (nonatomic) c sliceDownloadEndCount;
@property (nonatomic) TTHttpTask requestTask;
@property (nonatomic) BOOL isAppBeActiveSemWait;
@property (nonatomic) q currentNetType;
@property (nonatomic) BOOL isTrackerEnable;
@property (nonatomic) BOOL isServerSupportRangeDefault;
@property (nonatomic) TTDownloadDynamicThrottle dynamicThrottle;
@property (nonatomic) BOOL isDynamicThrottleEnable;
@property (nonatomic) NSString etag;
@property (nonatomic) NSString lastModifiedTime;
@property (nonatomic) NSString maxAgeTime;
@property (nonatomic) BOOL isCacheInvalid;
@property (nonatomic) BOOL isContentLengthInvalid;
@property (nonatomic) BOOL isCheckRangeFailed;
@property (nonatomic) BOOL isRcvHeaderCallback;
@property (nonatomic) BOOL isCheckCacheFromNet;
@property (nonatomic) NSString originEtag;
@property (nonatomic) NSString originMaxAge;
@property (nonatomic) BOOL isMergingSlicesAtForeground;
@property (nonatomic) BOOL isNoNetCancel;
@property (nonatomic) @? TTMd5Callback;
@property (nonatomic) NSString urlKey;
@property (nonatomic) NSString secondUrl;
@property (nonatomic) q firstSliceNeedDownloadLength;
@property (nonatomic) DownloadGlobalParameters userParameters;
@property (nonatomic) TTDownloadTaskConfig taskConfig;
@property (nonatomic) TTDownloadTrackModel trackModel;
@property (nonatomic) NSString downloadTaskFullPath;
@property (nonatomic) NSString downloadTaskSliceFullPath;
@property (nonatomic) BOOL isAppAtBackground;
@property (nonatomic) NSObject<OS_dispatch_semaphore> backgroundTaskCancelSem;
@property (nonatomic) c backgroundDownloadedCounter;
@property (nonatomic) c backgroundFailedCounter;
@property (nonatomic) BOOL isRestartTask;
@property (nonatomic) BOOL isMobileSwitchToWifiCancel;
@property (nonatomic) BOOL isWifiOnlyCancel;
@property (nonatomic) BOOL isCancelTask;
@property (nonatomic) BOOL isSkipGetContentLength;
@property (nonatomic) BOOL isBackgroundMerging;
@property (nonatomic) BOOL isStopWhileLoop;
@property (nonatomic) BOOL isServerSupportAcceptRange;
@property (nonatomic) q needDownloadLengthTotal;
@property (nonatomic) q contentTotalLength;
@property (nonatomic) NSInteger realSliceCount;
@property (nonatomic) @? progressBlock;
@property (nonatomic) @? resultBlock;
@property (nonatomic) @? onHeaderCallback;
@property (nonatomic) TTDownloadTaskExtendConfig originExtendConfig;
@property (nonatomic) NSObject<OS_dispatch_semaphore> sem;
@property (nonatomic) TTDownloadLogLite dllog;
- (BOOL)checkBackgroundDownloadFinished;
- (id)dynamicThrottle;
- (void)processFirstStartEventIsSaveDB:;
- (void)setBackgroundDownloadedCounter:;
- (void)setIsServerSupportRangeDefault:;
- (void)backgroundFailedCounterIncrease;
- (void)clearTaskConfig;
- (long long)getContentLengthWaitMaxInterval;
- (BOOL)getIsUseTracker;
- (BOOL)isStopWhileLoop;
- (BOOL)isTrackerEnable;
- (void)setIsMergingSlicesAtForeground:;
- (void)sliceCountHasDownloadedIncrease;
- (id)TTMd5Callback;
- (void)addBackgroundDownloadedBytes:;
- (void)addHttpResponse:;
- (void)appReachabilityChanged:;
- (void)applicationDidBecomeActive_;
- (void)applicationEnterBackground_;
- (void)asyncStatusReport:;
- (char)backgroundDownloadedCounter;
- (void)backgroundDownloadedCounterIncrease;
- (char)backgroundFailedCounter;
- (id)backgroundTaskCancelSem;
- (id)cacheBackupDir;
- (id)cacheFullPath;
- (BOOL)calculateContentLength;
- (BOOL)callTTNetInterface;
- (void)cancelAllBackgroundTask;
- (void)cancelTaskWithNeedTrack:;
- (void)checkAndAdjustThrottleSpeed;
- (void)checkCache;
- (long long)checkCacheFromNet;
- (BOOL)checkCacheInHeaderCallback;
- (void)checkDownloadDir;
- (BOOL)checkDownloadFinished;
- (BOOL)checkLastSubSlice;
- (void)checkUserPathAndTryToMove:;
- (void)configTrackModel;
- (long long)contentTotalLength;
- (void)countSliceNumberAndSize;
- (BOOL)createDownloadTaskConfig;
- (BOOL)createDownloadTaskDir;
- (void)createDynamicThrottle;
- (id)createNewFgSliceTask:;
- (BOOL)createRestoreFlags;
- (id)createSemWithRetry;
- (BOOL)createSliceDownloadTask;
- (id)createTrackModel;
- (long long)currentNetType;
- (void)deleteDownloadDir;
- (void)deleteTask:;
- (id)dllog;
- (void)downloadResultReport:reportStatusCode:;
- (id)downloadSliceBgTaskArray;
- (id)downloadSliceTaskArray;
- (id)downloadTaskFullPath;
- (id)downloadTaskSliceFullPath;
- (void)fetchDownloadProgressInfo;
- (id)fileMd5Value;
- (void)fillSliceInfo;
- (BOOL)fillSliceInfoByRealFileSize:;
- (void)fillSliceThrottleNetSpeed:;
- (long long)firstSliceNeedDownloadLength;
- (void)getContentLength:;
- (id)getContentLengthSem;
- (BOOL)getContentLengthWithRetry:;
- (void)getFullPath;
- (void)getHeaderFields:;
- (BOOL)getIsBackgroundDownloadEnable;
- (BOOL)getIsBackgroundDownloadWifiOnlyDisable;
- (BOOL)getIsCheckCacheValid;
- (BOOL)getIsClearCacheIfNoMaxAge;
- (BOOL)getIsCommonParamEnable;
- (BOOL)getIsDownloadWifiOnly;
- (BOOL)getIsHttps2HttpFallback;
- (BOOL)getIsRestartImmediatelyWhenNetworkChange;
- (BOOL)getIsRetainCacheIfCheckFailed;
- (BOOL)getIsServerSupportRangeDefault;
- (BOOL)getIsSkipGetContentLength;
- (BOOL)getIsSliced;
- (BOOL)getIsTTNetUrgentModeEnable;
- (BOOL)getIsUrgentModeEnable;
- (char)getLengthRetryMax;
- (id)getMaxAgeTiming:;
- (long long)getMergeDataLength;
- (long long)getMinDevisionSize;
- (long long)getRangeLength:endRange:;
- (long long)getRealNetSpeed:;
- (char)getRestoreTimesAutomatic;
- (long long)getRetryInterval:;
- (double)getRetryTimeoutInterval;
- (double)getRetryTimeoutIntervalIncrement;
- (long long)getSliceMaxNumber;
- (char)getSliceMaxRetryTimes;
- (long long)getStartOffset;
- (short)getTTNetProtectTimeout;
- (short)getTTNetRcvHeaderTimeout;
- (short)getTTNetReadDataTimeout;
- (short)getTTNetRequestTimeout;
- (long long)getThrottleNetSpeed;
- (char)getUrlRetryTimes;
- (id)httpResponseArray;
- (BOOL)httpsDegrade;
- (void)ignoreAllBackgroundTask;
- (void)ignoreFgTaskCallback;
- (id)initWithObjectDownloadTaskConfig:;
- (BOOL)isAppAtBackground;
- (BOOL)isAppBeActiveSemWait;
- (BOOL)isBackgroundMerging;
- (BOOL)isCacheInvalid;
- (BOOL)isCancelTask;
- (BOOL)isCheckCacheFromNet;
- (BOOL)isCheckRangeFailed;
- (BOOL)isContentLengthInvalid;
- (BOOL)isDynamicThrottleEnable;
- (BOOL)isFreeSpaceEnough:;
- (BOOL)isIgnoreMaxAgeCheck;
- (BOOL)isMergingSlicesAtForeground;
- (BOOL)isMobileSwitchToWifiCancel;
- (BOOL)isNeedBalanceThrottleSpeed;
- (BOOL)isNoNetCancel;
- (BOOL)isPreCheckFileLength;
- (BOOL)isRangeDownloadEnable;
- (BOOL)isRcvHeaderCallback;
- (BOOL)isRestartTask;
- (BOOL)isResume;
- (BOOL)isServerSupportAcceptRange;
- (BOOL)isServerSupportRangeDefault;
- (BOOL)isSkipGetContentLength;
- (BOOL)isStartDownloadingFlag;
- (BOOL)isUseKey;
- (BOOL)isWifiOnlyCancel;
- (long long)lastHadDownloadedLength;
- (id)maxAgeTime;
- (long long)md5Check:;
- (long long)mergeAllSlice;
- (long long)mergeSubSliceImpl;
- (void)mergeTncAndUserConfig;
- (long long)needDownloadLengthTotal;
- (void)onDownloadProcessEnd;
- (id)onHeaderCallback;
- (void)onceRunInTimer;
- (id)originExtendConfig;
- (id)originMaxAge;
- (void)p_sendMergeAllSliceEventWithStartInterval:;
- (BOOL)parserHeader:;
- (void)processCancelEventIsSaveDB:;
- (void)processCreateEventIsSaveDB:;
- (void)processFailEventWithCode:failMsg:isSaveDB:;
- (void)processFinishEventIsSaveDB:;
- (void)processStartEventIsSaveDB:;
- (BOOL)rangeCheck:contentLength:startOffset:endOffset:;
- (int)realSliceCount;
- (void)refreshTrackModel:;
- (BOOL)replaceScheme:;
- (void)resetDownloadTaskConfig;
- (BOOL)restartTask;
- (id)resultNotification;
- (id)secondUrl;
- (void)setBackgroundFailedCounter:;
- (void)setBackgroundTaskCancelSem:;
- (void)setCacheBackupDir:;
- (void)setCacheFullPath:;
- (void)setContentTotalLength:;
- (void)setCurrentNetType:;
- (void)setDllog:;
- (void)setDownloadSliceBgTaskArray:;
- (void)setDownloadSliceTaskArray:;
- (void)setDownloadTaskFullPath:;
- (void)setDownloadTaskSliceFullPath:;
- (void)setDynamicThrottle:;
- (void)setFileMd5Value:;
- (void)setFirstSliceNeedDownloadLength:;
- (void)setGetContentLengthSem:;
- (void)setGetLengthRetryMax:;
- (void)setHttpResponseArray:;
- (void)setIsAppAtBackground:;
- (void)setIsAppBeActiveSemWait:;
- (void)setIsBackgroundMerging:;
- (void)setIsCacheInvalid:;
- (void)setIsCancelTask:;
- (void)setIsCheckCacheFromNet:;
- (void)setIsCheckRangeFailed:;
- (void)setIsContentLengthInvalid:;
- (void)setIsDynamicThrottleEnable:;
- (void)setIsMobileSwitchToWifiCancel:;
- (void)setIsNoNetCancel:;
- (void)setIsRcvHeaderCallback:;
- (void)setIsRestartTask:;
- (void)setIsResume:;
- (void)setIsServerSupportAcceptRange:;
- (void)setIsSkipGetContentLength:;
- (void)setIsStartDownloadingFlag:;
- (void)setIsStopWhileLoop:;
- (void)setIsTrackerEnable:;
- (void)setIsUseKey:;
- (void)setIsWifiOnlyCancel:;
- (void)setLastHadDownloadedLength:;
- (void)setLastModifiedTime:;
- (void)setMaxAgeTime:;
- (void)setNeedDownloadLengthTotal:;
- (void)setOnHeaderCallback:;
- (void)setOriginExtendConfig:;
- (void)setOriginMaxAge:;
- (id)setRangeAndMergeUserHeader;
- (void)setRealSliceCount:;
- (void)setRestartImmediately;
- (void)setResultNotification:;
- (void)setSecondUrl:;
- (void)setSliceCancelCount:;
- (void)setSliceCountHasDownloaded:;
- (void)setSliceDownloadEndCount:;
- (void)setSliceDownloadFailedCount:;
- (void)setTTMd5Callback:;
- (void)setTaskConfig:;
- (BOOL)setThrottleNetSpeed2:;
- (void)setThrottleNetSpeed:;
- (void)setThrottleSpeed:;
- (void)setTrackModel:;
- (void)setUrlLists:;
- (void)setUserParameters:;
- (int)sliceCancelCount;
- (void)sliceCancelCountIncrease;
- (int)sliceCountHasDownloaded;
- (char)sliceDownloadEndCount;
- (int)sliceDownloadFailedCount;
- (void)sliceDownloadFailedCountIncrease;
- (void)startBackgroundDownload;
- (BOOL)startBackgroundTaskImpl;
- (void)startTask:urlLists:fileName:md5Value:isResume:isUseKey:progressBlock:resultBlock:;
- (void)startTaskImpl;
- (void)syncUrgentModeStatusReport:fullPath:;
- (id)taskConfig;
- (long long)throttleNetSpeed;
- (id)trackModel;
- (BOOL)tryContinueForegroundDownloading;
- (void)tryDynamicThrottle;
- (BOOL)tryRestoreTask;
- (void)updateContentLength:;
- (void)updateDownloadTaskStatus:;
- (void)updateSliceConfig;
- (void)updateSupportRange;
- (void)urgentModeProgressReport:;
- (id)urlLists;
- (id)progressBlock;
- (BOOL)isDelete;
- (id)fileName;
- (void)dealloc;
- (void)setProgressBlock:;
- (id)etag;
- (void)setRequestTask:;
- (void)startTimer;
- (void)setSem:;
- (void)setTimer:;
- (id)resultBlock;
- (void)setIsDelete:;
- (void)setResultBlock:;
- (void).cxx_destruct;
- (id)timer;
- (void)setBlock:;
- (void)setFileName:;
- (void)setEtag:;
- (id)requestTask;
- (id)sem;
- (id)userParameters;
- (void)cancelTask;
- (id)progressInfo;
- (void)setProgressInfo:;
- (id)lastModifiedTime;
- (id)urlKey;
- (void)setUrlKey:;
- (id)originEtag;
- (void)setOriginEtag:;
@end
