@interface AWECommerceMissionBonusCircleView : UIView
@property (nonatomic) UIView circleContentView;
@property (nonatomic) UILabel progressLabel;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIView shapeView;
@property (nonatomic) CAShapeLayer circleLayer;
@property (nonatomic) CAGradientLayer gradientLayer;
- (void)setCircleContentView:;
- (void)setShapeView:;
- (void)generateCircleShapeLayer:strokeColor:startAngle:endAngle:;
- (id)generateGradientLayerWithFlag:;
- (id)shapeView;
- (void)setupShapeLayerWithView:endAngle:isLightType:;
- (void)updateBonusViewWithMission:;
- (id)circleContentView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setupUI;
- (id)progressLabel;
- (void)setProgressLabel:;
- (void)setCircleLayer:;
- (id)circleLayer;
@end
