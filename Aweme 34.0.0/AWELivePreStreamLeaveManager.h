@interface AWELivePreStreamLeaveManager : NSObject
@property (nonatomic) NSMutableArray leaveTime;
- (void)prestreamLeave:;
- (id)leaveTime;
- (void)setLeaveTime:;
- (id)getFeedRequestLiveExtraParams;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
