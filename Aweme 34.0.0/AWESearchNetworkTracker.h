@interface AWESearchNetworkTracker : NSObject
+ (void)searchNetworkTriggerWithSearchType:pullType:extraDict:;
+ (id)searchNetworkMonitorInfoWithError:itemCount:;
+ (void)searchNetworkFinishWithSearchType:pullType:imprID:extraDict:;
@end
