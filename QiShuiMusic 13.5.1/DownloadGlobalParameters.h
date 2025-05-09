@interface DownloadGlobalParameters : JSONModel
@property (nonatomic) q urlRetryTimes;
@property (nonatomic) double retryTimeoutInterval;
@property (nonatomic) double retryTimeoutIntervalIncrement;
@property (nonatomic) BOOL isSliced;
@property (nonatomic) q sliceMaxNumber;
@property (nonatomic) q minDevisionSize;
@property (nonatomic) q mergeDataLength;
@property (nonatomic) q sliceMaxRetryTimes;
@property (nonatomic) double contentLengthWaitMaxInterval;
@property (nonatomic) q throttleNetSpeed;
@property (nonatomic) BOOL isHttps2HttpFallback;
@property (nonatomic) BOOL isDownloadWifiOnly;
@property (nonatomic) c restoreTimesAutomatic;
@property (nonatomic) BOOL isUseTracker;
@property (nonatomic) BOOL isBackgroundDownloadEnable;
@property (nonatomic) NSArray disableBackgroundDownloadIOSVersionList;
@property (nonatomic) BOOL isBackgroundDownloadWifiOnlyDisable;
@property (nonatomic) NSArray backgroundDownloadDisableWifiOnlyVersionList;
@property (nonatomic) NSMutableDictionary httpHeaders;
@property (nonatomic) BOOL isSkipGetContentLength;
@property (nonatomic) BOOL isServerSupportRangeDefault;
@property (nonatomic) BOOL isCheckCacheValid;
@property (nonatomic) BOOL isRetainCacheIfCheckFailed;
@property (nonatomic) BOOL isIgnoreMaxAgeCheck;
@property (nonatomic) BOOL isUrgentModeEnable;
@property (nonatomic) BOOL isClearCacheIfNoMaxAge;
@property (nonatomic) BOOL isTTNetUrgentModeEnable;
@property (nonatomic) s ttnetRequestTimeout;
@property (nonatomic) s ttnetReadDataTimeout;
@property (nonatomic) s ttnetRcvHeaderTimeout;
@property (nonatomic) s ttnetProtectTimeout;
@property (nonatomic) q queuePriority;
@property (nonatomic) q insertType;
@property (nonatomic) C observationBufferLength;
@property (nonatomic) C checkObservationBufferLength;
@property (nonatomic) C measureSpeedTimes;
@property (nonatomic) q startThrottleBandWidthMin;
@property (nonatomic) C rttGap;
@property (nonatomic) q speedGap;
@property (nonatomic) float matchConditionPercent;
@property (nonatomic) q dynamicBalanceDivisionThreshold;
@property (nonatomic) float bandwidthDeltaCoefficient;
@property (nonatomic) q bandwidthDeltaConstant;
@property (nonatomic) q expectFileLength;
@property (nonatomic) BOOL preCheckFileLength;
@property (nonatomic) double cacheLifeTimeMax;
@property (nonatomic) NSString componentId;
@property (nonatomic) BOOL isRestartImmediatelyWhenNetworkChange;
@property (nonatomic) BOOL isStopIfNoNet;
@property (nonatomic) q startOffset;
@property (nonatomic) q endOffset;
@property (nonatomic) NSString backgroundBOEDomain;
@property (nonatomic) BOOL isClearDownloadedTaskCacheAuto;
@property (nonatomic) NSString userCachePath;
@property (nonatomic) BOOL isCommonParamEnable;
@property (nonatomic) @? TTMd5Callback;
- (void)setIsServerSupportRangeDefault:;
- (long long)dynamicBalanceDivisionThreshold;
- (long long)mergeDataLength;
- (long long)minDevisionSize;
- (void)setComponentId:;
- (id)TTMd5Callback;
- (id)backgroundBOEDomain;
- (id)backgroundDownloadDisableWifiOnlyVersionList;
- (float)bandwidthDeltaCoefficient;
- (long long)bandwidthDeltaConstant;
- (double)cacheLifeTimeMax;
- (unsigned char)checkObservationBufferLength;
- (id)componentId;
- (double)contentLengthWaitMaxInterval;
- (id)disableBackgroundDownloadIOSVersionList;
- (long long)expectFileLength;
- (BOOL)isBackgroundDownloadEnable;
- (BOOL)isBackgroundDownloadWifiOnlyDisable;
- (BOOL)isCheckCacheValid;
- (BOOL)isClearCacheIfNoMaxAge;
- (BOOL)isClearDownloadedTaskCacheAuto;
- (BOOL)isCommonParamEnable;
- (BOOL)isDownloadWifiOnly;
- (BOOL)isHttps2HttpFallback;
- (BOOL)isIgnoreMaxAgeCheck;
- (BOOL)isRestartImmediatelyWhenNetworkChange;
- (BOOL)isRetainCacheIfCheckFailed;
- (BOOL)isServerSupportRangeDefault;
- (BOOL)isSkipGetContentLength;
- (BOOL)isSliced;
- (BOOL)isStopIfNoNet;
- (BOOL)isTTNetUrgentModeEnable;
- (BOOL)isUrgentModeEnable;
- (BOOL)isUseTracker;
- (float)matchConditionPercent;
- (unsigned char)measureSpeedTimes;
- (unsigned char)observationBufferLength;
- (BOOL)preCheckFileLength;
- (char)restoreTimesAutomatic;
- (double)retryTimeoutInterval;
- (double)retryTimeoutIntervalIncrement;
- (unsigned char)rttGap;
- (void)setBackgroundBOEDomain:;
- (void)setBackgroundDownloadDisableWifiOnlyVersionList:;
- (void)setBandwidthDeltaCoefficient:;
- (void)setBandwidthDeltaConstant:;
- (void)setCacheLifeTimeMax:;
- (void)setCheckObservationBufferLength:;
- (void)setContentLengthWaitMaxInterval:;
- (void)setDisableBackgroundDownloadIOSVersionList:;
- (void)setDynamicBalanceDivisionThreshold:;
- (void)setExpectFileLength:;
- (void)setIsBackgroundDownloadEnable:;
- (void)setIsBackgroundDownloadWifiOnlyDisable:;
- (void)setIsCheckCacheValid:;
- (void)setIsClearCacheIfNoMaxAge:;
- (void)setIsClearDownloadedTaskCacheAuto:;
- (void)setIsCommonParamEnable:;
- (void)setIsDownloadWifiOnly:;
- (void)setIsHttps2HttpFallback:;
- (void)setIsIgnoreMaxAgeCheck:;
- (void)setIsRestartImmediatelyWhenNetworkChange:;
- (void)setIsRetainCacheIfCheckFailed:;
- (void)setIsSkipGetContentLength:;
- (void)setIsSliced:;
- (void)setIsStopIfNoNet:;
- (void)setIsTTNetUrgentModeEnable:;
- (void)setIsUrgentModeEnable:;
- (void)setIsUseTracker:;
- (void)setMatchConditionPercent:;
- (void)setMeasureSpeedTimes:;
- (void)setMergeDataLength:;
- (void)setMinDevisionSize:;
- (void)setObservationBufferLength:;
- (void)setPreCheckFileLength:;
- (void)setRestoreTimesAutomatic:;
- (void)setRetryTimeoutInterval:;
- (void)setRetryTimeoutIntervalIncrement:;
- (void)setRttGap:;
- (void)setSliceMaxNumber:;
- (void)setSliceMaxRetryTimes:;
- (void)setSpeedGap:;
- (void)setStartThrottleBandWidthMin:;
- (void)setTTMd5Callback:;
- (void)setThrottleNetSpeed:;
- (void)setTtnetProtectTimeout:;
- (void)setTtnetRcvHeaderTimeout:;
- (void)setTtnetReadDataTimeout:;
- (void)setTtnetRequestTimeout:;
- (void)setUrlRetryTimes:;
- (void)setUserCachePath:;
- (long long)sliceMaxNumber;
- (long long)sliceMaxRetryTimes;
- (long long)speedGap;
- (long long)startThrottleBandWidthMin;
- (long long)throttleNetSpeed;
- (short)ttnetProtectTimeout;
- (short)ttnetRcvHeaderTimeout;
- (short)ttnetReadDataTimeout;
- (short)ttnetRequestTimeout;
- (long long)urlRetryTimes;
- (id)userCachePath;
- (id)init;
- (void)setQueuePriority:;
- (id)httpHeaders;
- (long long)endOffset;
- (void)setStartOffset:;
- (void)setHttpHeaders:;
- (long long)queuePriority;
- (void).cxx_destruct;
- (long long)startOffset;
- (id)copyWithZone:;
- (void)setEndOffset:;
- (long long)insertType;
- (void)setInsertType:;
+ (BOOL)propertyIsOptional:;
@end
