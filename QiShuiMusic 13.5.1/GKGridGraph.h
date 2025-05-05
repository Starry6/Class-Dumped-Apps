@interface GKGridGraph : GKGraph
@property (nonatomic)  gridOrigin;
@property (nonatomic) Q gridWidth;
@property (nonatomic) Q gridHeight;
@property (nonatomic) BOOL diagonalsAllowed;
- (void)removeNodes:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)gridWidth;
- (unsigned long long)gridHeight;
- (id)makeCGraph;
- (Class)classForGenericArgumentAtIndex:;
- (id)gridOrigin;
- (id)cGridGraph;
- (id)initFromGridStartingAt:width:height:diagonalsAllowed:;
- (id)initFromGridStartingAt:width:height:diagonalsAllowed:nodeClass:;
- (id)nodeAtGridPosition:;
- (id)nodeAtGridPositionNoNilCheck:;
- (void)connectNodeToAdjacentNodes:;
- (BOOL)diagonalsAllowed;
+ (BOOL)supportsSecureCoding;
+ (id)graphFromGridStartingAt:width:height:diagonalsAllowed:;
+ (id)graphFromGridStartingAt:width:height:diagonalsAllowed:nodeClass:;
@end
