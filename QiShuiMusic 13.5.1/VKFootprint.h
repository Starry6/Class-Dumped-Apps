@interface VKFootprint : NSObject
@property (nonatomic) {Box<double boundingRect;
@property (nonatomic) {VKFootprintConvexHull_struct=i[6{Matrix<double convexHull;
@property (nonatomic) double minDepth;
@property (nonatomic) double maxDepth;
@property (nonatomic) double centerDepth;
@property (nonatomic) {Matrix<double furthestGroundPoint;
@property (nonatomic) {Matrix<double nearestGroundPoint;
@property (nonatomic) ^v cornerGroundPoints;
@property (nonatomic) NSInteger cornerGroundPointsCount;
- (id)annotationRectTest;
- (id)annotationCoordinateTest;
- (id)convexHull;
- (id)boundingRect;
- (int)cornerGroundPointsCount;
- (id)cornerGroundPoints;
- (id)furthestGroundPoint;
- (double)maxDepth;
- (BOOL)containsGroundPoint:;
- (id)nearestGroundPoint;
- (id)_expandedBoundingRect;
- (double)centerDepth;
- (id).cxx_construct;
- (BOOL)rejectsRect:;
- (double)minDepth;
- (void)computeFromCamera:;
@end
