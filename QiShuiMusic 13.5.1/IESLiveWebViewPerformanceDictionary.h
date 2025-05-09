@interface IESLiveWebViewPerformanceDictionary : BDHMWebBasePerfDictionary
@property (nonatomic) IESLiveWebViewMonitorSettingModel settingModel;
@property (nonatomic) NSMutableDictionary overviewDic;
@property (nonatomic) NSMutableDictionary averageDic;
@property (nonatomic) NSMutableDictionary pendingParams;
@property (nonatomic) q lastReportIndex;
@property (nonatomic) NSString currentNativeNavigationID;
@property (nonatomic) NSString currentNativeUrl;
@property (nonatomic) NSString currentNativeVC;
@property (nonatomic) @ webView;
@property (nonatomic) # webViewClass;
@property (nonatomic) BDHMRepeatRecordFilter filter;
@property (nonatomic) NSString containerName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentNativeVC;
- (void)reportCurrentNavigationPagePerf;
- (void)reportResourceLoaderEvent:info:;
- (void)setBid:;
- (void)setOverviewDic:;
- (id)bid;
- (id)fetchCurrentUrl;
- (long long)lastReportIndex;
- (void)accumulateWithDic:;
- (void)addClientParams:paramsKey:addType:async:;
- (void)addClientParams:paramsKey:subParamsKey:addType:async:;
- (void)appendClientParams:forKey:;
- (void)appendParams:path:;
- (void)appendParams:path:async:;
- (id)averageDic;
- (void)bdhmReportAggregationRecord:;
- (void)bdhmReportAggregationRecord:isCurThreadOp:;
- (void)calAverageDicAndMerge;
- (void)collectEventCreated:;
- (void)collectJSSDKCachedDuplicationData:webView:;
- (id)containerBid;
- (id)containerUUIDList;
- (id)contextBlockList;
- (void)coverClientParams:;
- (void)coverClientParams:async:;
- (void)coverClientParamsOnce:;
- (void)coverWithDic:;
- (void)coverWithDic:nativeCommon:;
- (void)coverWithEventName:clientMetric:clientCategory:extra:;
- (id)currentNativeNavigationID;
- (id)currentNativeUrl;
- (BOOL)customReportRemoveDuplication:;
- (id)fetchBizTag;
- (id)fetchCurrentAttachVCName;
- (id)fetchCurrentNavID;
- (id)fetchCustomBaseContext:;
- (void)fetchFinalBid:;
- (id)formatORIGDic:;
- (id)formatORIGDic:nativeCommon:;
- (id)getNativeCommonInfo;
- (BOOL)inBlockList:;
- (id)initWithSettingModel:webView:;
- (void)mergeAccumulateData;
- (void)mergeDicToCalAverage:;
- (void)mergeToOverViewDic:;
- (id)overviewDic;
- (id)pendingParams;
- (void)prepareAverageForNavigationID:eventType:;
- (void)prepareCoverForNavigationID:paramsKey:url:;
- (void)recieveBidTerminatedPreCollect;
- (void)recieveWebMonitorConfig:;
- (void)reportBatchWithDic:webView:;
- (void)reportBlankWithDic:;
- (void)reportContainerError:errorCode:errorMsg:bizTag:;
- (void)reportCurrentPagePerf:;
- (void)reportCustomWithDic:webView:;
- (void)reportDirectlyNavInfoByRemoveDuplatedDic:eventName:;
- (void)reportDirectlyWithDic:;
- (void)reportDirectlyWithDic:nativeCommon:;
- (void)reportDirectlyWithDicCurrentThread:nativeCommon:;
- (void)reportDirectlyWithEventName:clientMetric:clientCategory:extra:;
- (void)reportDirectlyWrapNativeInfoWithDic:;
- (void)reportIfNeededWithDic:;
- (void)reportNavigationStart;
- (void)reportPVWithStageDic:;
- (void)reportPVWithURLStr:;
- (void)reportRequestError:withURLStr:;
- (void)reportTerminate:;
- (void)reportWebViewPluginInfo:;
- (id)sdkMonitorCommonParams;
- (void)setAverageDic:;
- (void)setContainerBid:;
- (void)setContainerReuse;
- (void)setContainerUUIDList:;
- (void)setContextBlockList:;
- (void)setCurrentNativeNavigationID:;
- (void)setCurrentNativeUrl:;
- (void)setCurrentNativeVC:;
- (void)setLastReportIndex:;
- (void)setNavigationID:;
- (void)setPendingParams:;
- (void)setWebViewClass:;
- (Class)webViewClass;
- (void)webViewDidFinishLoad;
- (void)webWillCollectDataBeforeLeave;
- (void)setWebView:;
- (id)filter;
- (void)setFilter:;
- (id)containerName;
- (void)dealloc;
- (id)webView;
- (void)setContainerName:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)settingModel;
+ (BOOL)canReportInCover:;
+ (BOOL)checkIsPerfTypeData:;
+ (void)registerFormatBlock:;
+ (void)registerInitParamsBlock:;
+ (void)reportCurrentPage:averageDic:customDic:doubleReportBlock:doubleReportKeys:webViewCls:containerUUIDList:bid:pid:isLive:;
+ (id)containerType;
@end
