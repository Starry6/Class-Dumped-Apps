@interface AWEIMGradientView : UIView
@property (nonatomic) NSArray colors;
@property (nonatomic) NSArray locations;
@property (nonatomic) {CGPoint=dd} startPoint;
@property (nonatomic) {CGPoint=dd} endPoint;
@property (nonatomic) NSString type;
- (id)endPoint;
- (void)setLocations:;
- (void)setStartPoint:;
- (void)setColors:;
- (void)setEndPoint:;
- (id)colors;
- (id)locations;
- (id)startPoint;
- (id)type;
- (void)setType:;
- (id)gradientLayer;
+ (Class)layerClass;
@end
