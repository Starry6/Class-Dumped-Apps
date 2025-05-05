@interface BDREGraphNode : NSObject
@property (nonatomic) NSMutableArray innerPointNodes;
@property (nonatomic) q maxIndex;
@property (nonatomic) NSArray pointNodes;
@property (nonatomic) BOOL isEndNode;
- (id)innerPointNodes;
- (void)addPointNode:;
- (BOOL)canPassWithFootPrint:;
- (BOOL)isEndNode;
- (BOOL)isVisitedWithFootPrint:;
- (id)pointNodes;
- (void)setInnerPointNodes:;
- (void)setMaxIndex:;
- (void)travelWithFootPrint:;
- (void)updateIndex:;
- (id)valueWithFootPrint:;
- (void)visitWithFootPrint:previousNode:;
- (id)init;
- (id)identifier;
- (long long)maxIndex;
- (void).cxx_destruct;
@end
