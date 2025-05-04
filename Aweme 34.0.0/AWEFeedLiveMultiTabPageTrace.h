@interface AWEFeedLiveMultiTabPageTrace : NSObject
@property (nonatomic) BOOL disableTrace;
@property (nonatomic) NSMutableDictionary traceTimeInfo;
@property (nonatomic) q tabID;
@property (nonatomic) NSString tabName;
- (void)setTabID:;
- (BOOL)disableTrace;
- (id)traceTimeInfo;
- (void)setDisableTrace:;
- (void)setTraceTimeInfo:;
- (void)reportTraceInfo;
- (void)reportInfoWithStageEvent:startIndex:endIndex:traceInfo:event:;
- (void)traceFeedEnterStage:;
- (void)traceFeedRequestTime:params:;
- (void).cxx_destruct;
- (long long)tabID;
- (id)tabName;
- (void)setTabName:;
@end
