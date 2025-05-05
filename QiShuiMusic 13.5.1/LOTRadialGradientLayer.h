@interface LOTRadialGradientLayer : CALayer
@property (nonatomic) {CGPoint=dd} startPoint;
@property (nonatomic) {CGPoint=dd} endPoint;
@property (nonatomic) NSArray colors;
@property (nonatomic) NSArray locations;
@property (nonatomic) BOOL isRadial;
- (void)drawInContext:;
- (id)actionForKey:;
+ (BOOL)needsDisplayForKey:;
@end
