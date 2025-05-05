@interface IESECWinHookActionService : NSObject
@property (nonatomic) IESECWinContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? backAcitonBlock;
@property (nonatomic) @? backAcitonJudgeCondition;
@property (nonatomic) @? backAcitonReplaceBlock;
- (id)backAcitonBlock;
- (id)backAcitonJudgeCondition;
- (id)backAcitonReplaceBlock;
- (void)executeWindowBackAction;
- (void)hookWindowBackAction:judgeCondition:replaceBlock:;
- (void)setBackAcitonBlock:;
- (void)setBackAcitonJudgeCondition:;
- (void)setBackAcitonReplaceBlock:;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)addObserver;
- (void)setContext:;
@end
