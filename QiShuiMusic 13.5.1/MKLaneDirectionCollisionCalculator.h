@interface MKLaneDirectionCollisionCalculator : NSObject
@property (nonatomic) BOOL hasCollisions;
@property (nonatomic) BOOL hasDirectionWithMaxCollisions;
@property (nonatomic) NSArray directions;
- (void).cxx_destruct;
- (id)directions;
- (id)initWithDirections:;
- (void)_recalculateCollisions;
- (BOOL)hasDirectionWithMaxCollisions;
- (void)removeNextDirectionWithCollisions;
- (void)removeDirectionWithCollisionsLeastSimilarToDirection:;
- (BOOL)hasCollisions;
@end
