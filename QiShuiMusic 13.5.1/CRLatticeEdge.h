@interface CRLatticeEdge : NSObject
@property (nonatomic) NSString symbol;
@property (nonatomic) Q edgeIndex;
@property (nonatomic) double score;
@property (nonatomic) Q startNode;
@property (nonatomic) Q endNode;
- (double)score;
- (id)symbol;
- (void).cxx_destruct;
- (unsigned long long)edgeIndex;
- (unsigned long long)startNode;
- (unsigned long long)endNode;
- (id)initWithSymbol:index:score:startNode:endNode:;
@end
