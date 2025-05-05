@interface AXVisualElementGrouper : AXElementGrouper
@property (nonatomic) double maximumNeighbourDistance;
@property (nonatomic) double maximumDistanceForAligningEdges;
- (id)initWithHeuristics:;
- (id)_groupablesForItems:;
- (double)maximumNeighbourDistance;
- (void)setMaximumNeighbourDistance:;
- (double)maximumDistanceForAligningEdges;
- (void)setMaximumDistanceForAligningEdges:;
@end
