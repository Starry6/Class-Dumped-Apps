@interface AWECommentAudioRecorderBezierPathAnimationView : AWECommentAudioRecorderBaseView
@property (nonatomic) CAGradientLayer shapeLayer;
@property (nonatomic) CAGradientLayer outShapeLayer;
@property (nonatomic) CAGradientLayer bottomShapeLayer;
@property (nonatomic) CAGradientLayer animationLayerOne;
@property (nonatomic) CAGradientLayer animationLayerTwo;
@property (nonatomic) CAGradientLayer animationLayerThree;
@property (nonatomic) UIBezierPath animationLayerOnePath;
@property (nonatomic) UIBezierPath animationLayerTwoPath;
@property (nonatomic) UIBezierPath animationLayerThreePath;
@property (nonatomic) double jumpValue;
@property (nonatomic) double jumpMin;
@property (nonatomic) double jumpMax;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} animationRect;
@property (nonatomic) BOOL isAnimationing;
@property (nonatomic) BOOL prepareCancel;
@property (nonatomic) NSTimer animationTimer;
- (void)dismissAnimation;
- (void)startWorkWithPreState:currentState:;
- (void)stopWorkWithPreState:currentState:;
- (void)increaseVolumeAnimation:currentTime:;
- (void)setPrepareCancel:;
- (BOOL)isAnimationing;
- (void)updateLayerColor;
- (id)jumpLayerColorOnes;
- (id)animationLayerOne;
- (id)jumpLayerColorTwos;
- (id)animationLayerTwo;
- (id)jumpLayerColorThrees;
- (id)animationLayerThree;
- (id)bottomShapeLayer;
- (id)shapeLayerColors;
- (id)outShapeLayer;
- (id)outLayerColors;
- (void)setJumpValue:;
- (void)addSubLayer;
- (void)setIsAnimationing:;
- (id)getCenter;
- (void)animationLayerWithCenter:;
- (void)setAnimationLayerOne:;
- (void)setAnimationLayerTwo:;
- (void)setAnimationLayerThree:;
- (double)jumpMax;
- (double)jumpMin;
- (id)animationLayerOnePath;
- (id)animationPathWithCenter:minControl:maxControl:finalControl:;
- (void)animationWithLayer:fromPath:toPath:;
- (id)animationLayerTwoPath;
- (id)animationLayerThreePath;
- (void)setAnimationLayerOnePath:;
- (void)setAnimationLayerTwoPath:;
- (void)setAnimationLayerThreePath:;
- (id)getDefaultStartPointWithCenter:radius:;
- (id)getDefaultEndPointWithCenter:radius:;
- (int)getRandomNumberWithMin:max:;
- (id)generateGradientLayerWithColors:;
- (void)setJumpMin:;
- (void)setJumpMax:;
- (BOOL)prepareCancel;
- (int)getStartNumber;
- (double)getXWithNumber:radius:;
- (double)getYWithNumber:radius:;
- (float)arcNumberWithNumber:;
- (double)getTransformPadding;
- (void)setOutShapeLayer:;
- (void)setBottomShapeLayer:;
- (double)jumpValue;
- (id)animationRect;
- (void)setAnimationRect:;
- (id)shadowColor;
- (void)setShapeLayer:;
- (id)shapeLayer;
- (void).cxx_destruct;
- (void)animation;
- (id)animationTimer;
- (void)setAnimationTimer:;
+ (id)colorWithHex:alpha:;
@end
