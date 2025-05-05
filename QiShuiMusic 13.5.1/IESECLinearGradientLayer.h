@interface IESECLinearGradientLayer : CALayer
@property (nonatomic) NSArray colors;
@property (nonatomic) NSArray locations;
@property (nonatomic) {CGPoint=dd} startPoint;
@property (nonatomic) {CGPoint=dd} endPoint;
- (id)colors;
- (id)endPoint;
- (void)setEndPoint:;
- (void)drawInContext:;
- (id)startPoint;
- (void)setLocations:;
- (void)setStartPoint:;
- (void)setColors:;
- (id)locations;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)transformPoint:;
@end
