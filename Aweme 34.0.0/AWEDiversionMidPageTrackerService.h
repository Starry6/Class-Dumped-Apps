@interface AWEDiversionMidPageTrackerService : NSObject
@property (nonatomic) NSMutableArray sessions;
- (void)didJumpToVideoCutWithEndTime:;
- (id)fulfillDiversionParams:;
- (void)startNewSession:;
- (void)exitMidPage:;
- (void)applicationWillResignActive:;
- (id)sessions;
- (void)applicationDidBecomeActive:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setSessions:;
+ (void)startMidPageSession:withParam:tracker:;
+ (void)exitMidPageSession:;
+ (void)midPageSuspended:;
+ (void)midPageResumed:;
@end
