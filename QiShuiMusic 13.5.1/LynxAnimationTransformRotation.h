@interface LynxAnimationTransformRotation : NSObject
@property (nonatomic) double rotationX;
@property (nonatomic) double rotationY;
@property (nonatomic) double rotationZ;
- (BOOL)isEqualToTransformRotation:;
- (id)init;
- (void)setRotationY:;
- (double)rotationX;
- (void)setRotationX:;
- (double)rotationY;
- (void)setRotationZ:;
- (double)rotationZ;
@end
