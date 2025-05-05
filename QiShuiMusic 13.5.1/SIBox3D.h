@interface SIBox3D : NSObject
@property (nonatomic)  extent;
@property (nonatomic) {?=[4]} transform;
@property (nonatomic) {?=[4]} transformFromBoxCorner;
- (id)extent;
- (void)setTransform:;
- (id)transform;
- (void)setExtent:;
- (id)initWithTransform:extent:;
- (id)initWithCornerTransform:extent:;
- (id)transformFromBoxCorner;
- (id)getCentroid;
- (void)transformToNewCoordinate:;
- (float)signedDistanceFunction:;
- (id)closestPoint:;
+ (id)transformToNewCoordinate:current:;
@end
