@interface IESLiveBattleDrawPropAnimationQueue : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> drawPropQueue;
@property (nonatomic) NSMutableArray nodeArray;
@property (nonatomic) IESLiveBattleDrawPropOperation currentOperation;
@property (nonatomic) BOOL operationIsFinished;
- (void)cancelAllOperation;
- (id)dequeueNodeAtIndex:;
- (void)dequeueWithBattleDrawPropNode;
- (id)drawPropQueue;
- (void)enqueueWithBattleDrawPropNode:;
- (id)initWithDIContext:;
- (id)nodeArray;
- (BOOL)operationIsFinished;
- (void)setDrawPropQueue:;
- (void)setNodeArray:;
- (void)setOperationIsFinished:;
- (void)startOperationWithNode:;
- (id)currentOperation;
- (void).cxx_destruct;
- (void)setCurrentOperation:;
@end
