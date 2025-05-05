@interface RadialGradientLayer : CALayer
@property (nonatomic) {CGPoint=dd} center;
@property (nonatomic) double radius;
@property (nonatomic) float opacity;
@property (nonatomic) UIColor color;
- (id)initWithCenter:radius:opacity:color:;
- (id)center;
- (void)drawInContext:;
- (void)setRadius:;
- (void)setCenter:;
- (void)setColor:;
- (double)radius;
- (id)color;
- (void).cxx_destruct;
@end
