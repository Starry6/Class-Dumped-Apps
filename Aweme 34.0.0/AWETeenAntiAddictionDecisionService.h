@interface AWETeenAntiAddictionDecisionService : NSObject
@property (nonatomic) NSMutableArray taskArray;
@property (nonatomic) double lastDecisionTS;
- (void)teenModeDidChange:isLogout:;
- (id)taskArray;
- (void)setTaskArray:;
- (void)storeLastDecisionTS;
- (void)setLastDecisionTS:;
- (double)lastDecisionTS;
- (id)taskForID:;
- (id)init;
- (void)addTask:;
- (void).cxx_destruct;
- (void)makeDecision;
@end
