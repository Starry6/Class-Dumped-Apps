@interface GVRank : NSObject
@property (nonatomic) GVRank prev;
@property (nonatomic) GVRank next;
@property (nonatomic) double width;
@property (nonatomic) double height;
- (id)next;
- (void)setNext:;
- (id)prev;
- (void)removeNode:;
- (void)dealloc;
- (void)setPrev:;
- (void)addNode:;
- (double)height;
- (double)width;
- (id)nodes;
- (id)initWithSeparation:;
- (id)neighborsOfNode:;
- (void)sortByIndex;
- (void)exchangeNodeAtIndex:withNodeAtIndex:;
- (void)buildNodeIterators;
- (unsigned long long)inCrossings;
- (unsigned long long)outCrossings;
- (id)sizeForDummy;
- (void)centerNodesWithRespectoTo:;
- (void)centerNode:at:;
@end
