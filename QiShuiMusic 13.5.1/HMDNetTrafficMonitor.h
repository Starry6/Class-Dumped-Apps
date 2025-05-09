@interface HMDNetTrafficMonitor : HMDMonitor
@property (nonatomic) {?=IIIIII} pageIOBytes;
@property (nonatomic) HMDNetTrafficUsageStatistics statisticsTool;
@property (nonatomic) NSObject<OS_dispatch_source> intervalTrafficTimer;
@property (nonatomic) NSObject<OS_dispatch_queue> trafficCollectQueue;
@property (nonatomic) NSMutableDictionary customSpanInfoDict;
@property (nonatomic) BOOL everFront;
@property (nonatomic) NSMutableArray callbacks;
@property (nonatomic) BOOL enableProcTraffic;
@property (nonatomic) q procStartTrafficTS;
@property (nonatomic) BOOL enableIntervalTraffic;
@property (nonatomic) BOOL enableNetworkTraffic;
@property (nonatomic) BOOL enablePushTraffic;
- (id)collectIntervalHighFreqRequest:;
- (void)removeTrafficUsageInfoCallback:;
- (void)setPageIOBytes:;
- (void)updateSubModuleStateWithConfig:;
- (void)willLeaveScene:;
- (void)addTrafficUsageInfoCallback:;
- (void)callbackBizUsageInfoWithIntervalUsage:;
- (id)collectIntervalBizUsage:;
- (id)collectIntervalLargeUsage:;
- (id)customSpanInfoDict;
- (void)didEnterScene:;
- (BOOL)enableIntervalTraffic;
- (BOOL)enableNetworkTraffic;
- (BOOL)enableProcTraffic;
- (BOOL)enablePushTraffic;
- (BOOL)enableUploadWithRecord:;
- (void)endCustomTrafficSpanWithSpanName:completion:;
- (BOOL)everFront;
- (id)exceptionConditions;
- (void)executePublicCallBackWithMonitorType:usage:biz:;
- (id)formatToTrafficDetailWithBizUsageArray:;
- (void)hmdCutomPerformanceDataReportSuccess:;
- (id)hmdCutomPerformanceDataWithCountLimit:;
- (id)intervalTrafficTimer;
- (BOOL)monitorCurve:willSaveRecords:;
- (void)networkTrafficUsageWithURL:requestLog:clientType:MIMEType:;
- (void)networkTrafficUsageWithURL:sendBytes:recvBytes:clientType:MIMEType:;
- (void)notificateConsumeEnterBackground:;
- (void)notificateConsumeEnterForground:;
- (id)pageIOBytes;
- (long long)procStartTrafficTS;
- (void)processRecordUniformly:;
- (void)processWillExist;
- (void)recordForSpecificScene:;
- (void)recordProcessTraffic;
- (unsigned long long)reporterPriority;
- (void)setCustomSpanInfoDict:;
- (void)setEnableIntervalTraffic:;
- (void)setEnableNetworkTraffic:;
- (void)setEnableProcTraffic:;
- (void)setEnablePushTraffic:;
- (void)setEverFront:;
- (void)setExceptionConditions:;
- (void)setIntervalTrafficTimer:;
- (void)setProcStartTrafficTS:;
- (void)setStatisticsTool:;
- (void)setTrafficCollectQueue:;
- (void)setupSubModuleWhenStart;
- (void)setupTimerForIntervalTrafficUsage;
- (void)startCustomTrafficSpanWithSpanName:;
- (id)statisticsTool;
- (void)stopTimeForIntervalTrafficUsageIfNeed;
- (void)switchIntervalTimerWithStatus:;
- (void)switchNetworkCollectStatus:;
- (void)switchTTPushCollectStatus:;
- (id)trafficCollectQueue;
- (void)trafficConsumeWithAccumulateTrafficBytes:sourceId:business:scene:extraStatus:extraLog:;
- (void)trafficConsumeWithAccumulateTrafficBytes:sourceId:business:scene:extraStatus:extraLog:trafficType:;
- (void)trafficConsumeWithTrafficBytes:sourceId:business:scene:extraStatus:extraLog:;
- (void)trafficConsumeWithTrafficBytes:sourceId:business:scene:extraStatus:extraLog:trafficType:;
- (void)trafficDetialDumpWithTotalRecord:completion:;
- (void)trafficUsagerPreTenMinutes;
- (void)updateConfig:;
- (id)init;
- (void)dealloc;
- (void)didEnterBackground:;
- (void)setCallbacks:;
- (void)start;
- (void)stop;
- (id)callbacks;
- (void).cxx_destruct;
- (void)willEnterForeground:;
- (Class)storeClass;
+ (void)changeTrafficAppState:;
+ (unsigned long long)currentTrafficAppState;
+ (void)monitorInvalidIOBytesValue:;
+ (id)relativeDataForIntervalUsageBefore:;
+ (id)sharedMonitor;
@end
