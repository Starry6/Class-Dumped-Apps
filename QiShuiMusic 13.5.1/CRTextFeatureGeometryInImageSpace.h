@interface CRTextFeatureGeometryInImageSpace : NSObject
@property (nonatomic) CRTextFeature textFeature;
@property (nonatomic) CRImageSpaceQuad quad;
@property (nonatomic) double diagonalDistance;
@property (nonatomic) double distanceToClosestFeature;
@property (nonatomic) BOOL isIsolated;
- (void).cxx_destruct;
- (id)quad;
- (void)setQuad:;
- (BOOL)isIsolated;
- (BOOL)shouldBeConsiderForFiltering;
- (BOOL)shouldBeConsideredForNearestDistanceCalculation;
- (void)calculateMinimumDistanceFromOtherFeatureGeometries:;
- (double)_distanceFromQuad1:toQuad2:;
- (id)textFeature;
- (void)setTextFeature:;
- (double)diagonalDistance;
- (void)setDiagonalDistance:;
- (double)distanceToClosestFeature;
- (void)setDistanceToClosestFeature:;
@end
