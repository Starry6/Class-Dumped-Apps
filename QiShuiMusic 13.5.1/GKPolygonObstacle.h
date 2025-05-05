@interface GKPolygonObstacle : GKObstacle
@property (nonatomic) Q vertexCount;
- (id)init;
- (void)dealloc;
- (unsigned long long)vertexCount;
- (id)initWithCoder:;
- (id)vertexAtIndex:;
- (void)encodeWithCoder:;
- (id)initWithPoints:count:;
- (id)obstacle;
- (void)setCPolygonObstacle:;
- (id)cPolygonObstacle;
+ (BOOL)supportsSecureCoding;
+ (id)obstacleWithPoints:count:;
@end
