@interface AWEConcernFeedResponseMonitor : NSObject
@property (nonatomic) NSMutableDictionary followFeedMonitorParams;
- (void)appendParams:;
- (void)trackFollowFeedResponse:error:dataList:;
- (void)appendParamKey:value:;
- (id)followFeedMonitorParams;
- (void)setFollowFeedMonitorParams:;
- (id)init;
- (void).cxx_destruct;
@end
