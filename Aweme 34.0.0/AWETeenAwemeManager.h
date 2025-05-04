@interface AWETeenAwemeManager : NSObject
+ (void)fetchAwemeWithType:count:feedColumnType:initialFetch:extParams:completion:;
+ (id)feedTableVC;
+ (void)fetchVideosForOfflineCacheWithType:count:feedColumntype:extParams:pullType:completion:;
+ (id)getExpectedSizeInfo;
+ (void)fetchAwemeForCacheWithType:count:feedColumnType:completion:;
+ (id)recordRisingHotVideoStats:;
+ (id)p_trackingParamsWithInstallAndActionTime:;
+ (double)p_firstInstallTime;
+ (double)p_actionTime;
+ (id)filterDuplicatedDatasourceWithArray:;
+ (void)cancelCurrentTask;
+ (void)_requestAwemeItemWithParams:feedColumnType:completion:;
+ (id)_requestAwemeItemsWithURLString:params:timeout:completionBlock:;
+ (void)statisticsNewPlayWithID:vcType:awemeType:extraParams:;
+ (long long)p_tabTypeWithVCType:;
+ (void)statisticsNewPlayWithID:vcType:awemeType:followStatus:followerStatus:extraLog:extraParams:;
+ (void)loadmoreAwemeWithType:feedColumnType:extParams:completion:;
+ (id)_requestAwemeItemsWithURLString:params:completionBlock:;
+ (void)interactAwemeItemWithID:action:vcType:completion:;
+ (void)statisticsNewPlayWithID:vcType:awemeType:;
+ (void)statisticsNewPlayWithID:vcType:awemeType:followStatus:followerStatus:extraLog:;
@end
