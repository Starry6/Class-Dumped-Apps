@interface AWEEcomImageSearchMonitorUtils : NSObject
@property (nonatomic) NSDate reqeustStartTime;
@property (nonatomic) Q searchPullType;
- (void)requestStartMonitorWithIsLoadMore:;
- (void)receiveRawJsonMonitorWith:;
- (void)receiveResponseMonitorWithResponse:Error:EnterFrom:RefViewController:;
- (void)clientTraceEndMonitorWith:;
- (void)setReqeustStartTime:;
- (void)setSearchPullType:;
- (unsigned long long)searchPullType;
- (void)p_handleRefreshServerTimeCost:RefViewController:;
- (id)reqeustStartTime;
- (void).cxx_destruct;
@end
