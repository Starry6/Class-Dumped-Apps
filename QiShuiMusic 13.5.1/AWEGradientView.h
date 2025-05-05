@interface AWEGradientView : UIView
@property (nonatomic) NSArray colors;
@property (nonatomic) NSArray locations;
@property (nonatomic) {CGPoint=dd} startPoint;
@property (nonatomic) {CGPoint=dd} endPoint;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL canReturnSelfInHitTest;
- (BOOL)canReturnSelfInHitTest;
- (void)setCanReturnSelfInHitTest:;
- (void)simulateBezierGradientWithCount:;
- (id)colors;
- (id)endPoint;
- (void)setEndPoint:;
- (id)startPoint;
- (void)setLocations:;
- (void)setStartPoint:;
- (void)setColors:;
- (id)locations;
- (id)gradientLayer;
- (void)setType:;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (id)type;
+ (Class)layerClass;
@end
