@interface BDAntiAddictionDecisionService : NSObject
@property (nonatomic) NSMutableArray taskArray;
@property (nonatomic) double lastDecisionTS;
- (double)lastDecisionTS;
- (void)setLastDecisionTS:;
- (void)setTaskArray:;
- (void)storeLastDecisionTS;
- (id)taskArray;
- (id)taskForID:;
- (void)teenModeDidChange:;
- (void)addTask:;
- (id)init;
- (void).cxx_destruct;
- (void)makeDecision;
@end
