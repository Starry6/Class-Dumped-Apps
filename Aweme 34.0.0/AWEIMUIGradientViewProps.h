@interface AWEIMUIGradientViewProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSString type;
@property (nonatomic) NSArray colors;
@property (nonatomic) NSArray locations;
@property (nonatomic) {CGPoint=dd} startPoint;
@property (nonatomic) {CGPoint=dd} endPoint;
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
- (void).cxx_destruct;
@end
