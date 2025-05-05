@interface SFRingView : UIView
@property (nonatomic) CAShapeLayer shapeLayer;
@property (nonatomic) double radius;
- (void)setRadius:;
- (double)radius;
- (void)tintColorDidChange;
- (id)initWithFrame:;
- (id)shapeLayer;
- (BOOL)_shouldAnimatePropertyWithKey:;
+ (Class)layerClass;
@end
