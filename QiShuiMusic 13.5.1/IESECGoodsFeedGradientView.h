@interface IESECGoodsFeedGradientView : UIView
@property (nonatomic) UIColor startColor;
@property (nonatomic) UIColor endColor;
@property (nonatomic) {CGPoint=dd} startPoint;
@property (nonatomic) {CGPoint=dd} endPoint;
@property (nonatomic) NSArray locations;
@property (nonatomic) NSArray colors;
- (id)colors;
- (id)endPoint;
- (void)setEndPoint:;
- (id)startPoint;
- (void)setLocations:;
- (void)setStartPoint:;
- (void)setColors:;
- (id)locations;
- (id)init;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setStartColor:;
- (void)setEndColor:;
- (id)startColor;
- (id)endColor;
+ (Class)layerClass;
@end
