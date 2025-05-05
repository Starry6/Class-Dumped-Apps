@interface IESECCABaseGradientView : UIView
@property (nonatomic) NSArray colors;
@property (nonatomic) NSArray locations;
@property (nonatomic) {CGPoint=dd} startPoint;
@property (nonatomic) {CGPoint=dd} endPoint;
- (id)colors;
- (id)endPoint;
- (void)setEndPoint:;
- (id)startPoint;
- (void)setLocations:;
- (void)setStartPoint:;
- (void)setColors:;
- (id)locations;
- (id)init;
- (id)gradientLayer;
- (id)initWithFrame:;
- (void).cxx_destruct;
+ (Class)layerClass;
@end
