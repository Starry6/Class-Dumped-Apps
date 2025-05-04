@interface AWEArrowIconDescriptor : AWEGraphicsIconDescriptor
@property (nonatomic) double angle;
@property (nonatomic) double radius;
@property (nonatomic) double lineWidth;
@property (nonatomic) double rotation;
@property (nonatomic) double tailLength;
- (id)createLayer;
- (double)radius;
- (void)setLineWidth:;
- (double)lineWidth;
- (id)init;
- (double)rotation;
- (void)setRotation:;
- (void)setRadius:;
- (double)angle;
- (void)setAngle:;
- (void)setTailLength:;
- (double)tailLength;
@end
