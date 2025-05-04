@interface AWESearchIdleTaskHelper : NSObject
@property (nonatomic) BOOL isRefreshMonitorFinish;
- (BOOL)isRefreshMonitorFinish;
- (void)searchRefreshMointorFinish:;
- (void)searchRefreshMointorStart:;
- (void)setIsRefreshMonitorFinish:;
- (void)addSearchRefreshMonitorObserver;
- (void)removeSearchRefreshMonitorObserver;
+ (id)sharedInstance;
@end
