@interface IESLiveUserEnterQueue : NSObject
@property (nonatomic) NSMutableArray array;
@property (nonatomic) @? dequeueNodeCallBack;
- (unsigned long long)countOfCalculateThresholdObjects;
- (void)dequeueInPriorityOrder;
- (id)dequeueNodeCallBack;
- (id)front;
- (id)popNodeWithCondition:;
- (void)removeLastNodeWithCondition:;
- (void)removeNodeWithCondition:;
- (void)replaceFront:;
- (void)replaceNode:withCondition:;
- (void)setDequeueNodeCallBack:;
- (BOOL)updateCommonNotifyEnterNode:;
- (id)initWithLabel:;
- (void)enqueue:;
- (BOOL)isEmpty;
- (id)array;
- (void)dequeue;
- (void)clear;
- (void).cxx_destruct;
- (void)setArray:;
- (void)replaceNodeAtIndex:withNode:;
- (unsigned long long)count;
- (BOOL)contains:;
- (id)popNode;
- (void)pushNode:;
@end
