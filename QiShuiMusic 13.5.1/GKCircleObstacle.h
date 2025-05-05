@interface GKCircleObstacle : GKObstacle
@property (nonatomic) float radius;
@property (nonatomic)  position;
- (void)setPosition:;
- (void)setRadius:;
- (id)position;
- (id)init;
- (float)radius;
- (id).cxx_construct;
- (id)initWithRadius:;
- (id)obstacle;
+ (id)obstacleWithRadius:;
@end
