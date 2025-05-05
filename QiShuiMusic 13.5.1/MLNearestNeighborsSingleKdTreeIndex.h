@interface MLNearestNeighborsSingleKdTreeIndex : NSObject
@property (nonatomic) Q numDimensions;
@property (nonatomic) Q leafSize;
@property (nonatomic) _KDNode root;
- (unsigned long long)dataPointCount;
- (id)root;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setRoot:;
- (id)findNearestNeighbors:toQueryPoint:;
- (id)findNearestNeighbors:toIndex:;
- (BOOL)updateWithData:error:;
- (unsigned long long)numDimensions;
- (void)setNumDimensions:;
- (unsigned long long)leafSize;
- (void)setLeafSize:;
- (id)initWithDataset:numberOfDimensions:leafSize:error:;
- (id)constructTree;
- (id)constructTreeForPointsBoundedBy:startingIndex:count:;
- (id)calculateDistancesForNodesBetweenLeft:andRight:toQueryPoint:;
- (void)findK:nearestNeighbors:toQueryPoint:inTree:;
+ (BOOL)supportsSecureCoding;
@end
