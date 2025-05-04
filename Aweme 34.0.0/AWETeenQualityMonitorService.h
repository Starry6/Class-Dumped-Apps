@interface AWETeenQualityMonitorService : NSObject
@property (nonatomic) NSMutableDictionary monitorDataDic;
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
- (void)endRenderContentStageForScene:subScene:error:extraInfo:;
- (void)startMonitorWithScene:subScene:isRefresh:;
- (void)endCreateContainerStageForScene:subScene:;
- (void)stopMonitorWithScene:subScene:status:error:extraInfo:;
- (void)beginRequestDataStageForScene:subScene:;
- (void)endRequestDataStageForScene:subScene:error:extraInfo:;
- (void)beginRenderContentStageForScene:subScene:;
- (id)monitorIdentifyWithScene:subScene:;
- (id)monitorDataDic;
- (void)stopMonitorQualityMessgae:status:error:extraInfo:;
- (void)beginCreateContainerStageForScene:subScene:;
- (id)qualityMessageForScene:subScene:;
- (void)beginStage:forScene:subScene:;
- (void)endStage:forScene:subScene:error:extraInfo:;
- (void)reportQuality:extraInfo:;
- (void)setMonitorDataDic:;
- (id)dispatchQueue;
- (void)setDispatchQueue:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
