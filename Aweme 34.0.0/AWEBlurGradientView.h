@interface AWEBlurGradientView : UIVisualEffectView
@property (nonatomic) NSArray colors;
@property (nonatomic) NSArray locations;
@property (nonatomic) {CGPoint=dd} startPoint;
@property (nonatomic) {CGPoint=dd} endPoint;
@property (nonatomic) NSString type;
@property (nonatomic) BOOL canReturnSelfInHitTest;
- (void)setCanReturnSelfInHitTest:;
- (BOOL)canReturnSelfInHitTest;
- (id)endPoint;
- (void)setLocations:;
- (void)setStartPoint:;
- (void)setColors:;
- (void)setEndPoint:;
- (id)colors;
- (id)locations;
- (id)startPoint;
- (id)initWithFrame:;
- (id)type;
- (void)setType:;
- (id)gradientLayer;
+ (Class)layerClass;
@end
