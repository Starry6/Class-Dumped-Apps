@interface IESLiveCircleProgressView : UIView
@property (nonatomic) UIColor progressColor;
@property (nonatomic) UIColor progressBackgroundColor;
@property (nonatomic) double progressWidth;
@property (nonatomic) BOOL clockwise;
@property (nonatomic) CAShapeLayer shapeLayer;
@property (nonatomic) double progress;
@property (nonatomic) BOOL originalHiddenStatus;
- (id)createBackgroundLayerWithConfig:;
- (id)createCircleShapeLayerWithConfig:;
- (id)createGradientLayerWithConfig:;
- (id)initWithFrame:progressConfig:;
- (BOOL)originalHiddenStatus;
- (void)setOriginalHiddenStatus:;
- (void)setProgress:;
- (double)progress;
- (id)shapeLayer;
- (void)setShapeLayer:;
- (void).cxx_destruct;
- (id)progressColor;
- (void)setProgressColor:;
- (id)progressBackgroundColor;
- (void)setProgressBackgroundColor:;
- (void)setProgress:animated:;
- (void)setClockwise:;
- (BOOL)clockwise;
- (double)progressWidth;
- (void)setProgressWidth:;
@end
