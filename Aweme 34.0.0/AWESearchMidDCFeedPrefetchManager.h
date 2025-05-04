@interface AWESearchMidDCFeedPrefetchManager : NSObject
@property (nonatomic) <AWEDCFeedDataControllerProtocol><AWEDCFeedPrefetchProtocol> prefetchDataController;
@property (nonatomic) double prefetchStartTime;
@property (nonatomic) q prefetchState;
- (long long)prefetchState;
- (void)setPrefetchState:;
- (void)setPrefetchStartTime:;
- (double)prefetchStartTime;
- (BOOL)enableNativeDC;
- (void)clearPrefetchedData;
- (void)setPrefetchDataController:;
- (BOOL)prefetchOpt;
- (void)optPrefetchWithParam:originCompletion:;
- (void)realPrefetchWithDataController:params:originCompletion:;
- (void)trackPrefetchWithStartTime:success:;
- (void)trackPrefetchErrorIfNeeded:error:;
- (id)prefetchDataController;
- (BOOL)prefetchSearchDCDataWithURL:requestParams:originCompletion:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
