@interface AWENetworkQualityTracker : NSObject
@property (nonatomic) AWENetworkQuailityManager manager;
@property (nonatomic) double latestCallBackAt;
@property (nonatomic) double latestWeekNetworkAt;
@property (nonatomic) double latestCriticalWeekNetworkAt;
@property (nonatomic) Q neqStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)networkQualityManger:didChangeQuailty:;
- (void)setLatestCallBackAt:;
- (unsigned long long)statusForModel:;
- (unsigned long long)neqStatus;
- (void)setLatestWeekNetworkAt:;
- (void)setLatestCriticalWeekNetworkAt:;
- (void)setNeqStatus:;
- (double)latestWeekNetworkAt;
- (void)p_trackNetworkChangeWithParams:;
- (double)latestCriticalWeekNetworkAt;
- (double)latestCallBackAt;
- (void)setManager:;
- (id)init;
- (void)dealloc;
- (id)manager;
- (void)started;
- (void).cxx_destruct;
- (void)ended;
@end
