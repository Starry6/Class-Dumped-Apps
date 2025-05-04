@interface AWETransformerColor : NSObject
@property (nonatomic) UIColor color;
@property (nonatomic) BOOL isGradientColor;
@property (nonatomic) {CGPoint=dd} startPoint;
@property (nonatomic) {CGPoint=dd} endPoint;
@property (nonatomic) NSArray colors;
@property (nonatomic) NSArray locations;
- (BOOL)isGradientColor;
- (void)setIsGradientColor:;
- (id)endPoint;
- (void)setLocations:;
- (void)setStartPoint:;
- (void)setColors:;
- (void)setEndPoint:;
- (id)colors;
- (id)locations;
- (id)color;
- (id)startPoint;
- (void)setColor:;
- (void).cxx_destruct;
@end
