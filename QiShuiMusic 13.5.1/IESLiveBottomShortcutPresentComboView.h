@interface IESLiveBottomShortcutPresentComboView : UIView
@property (nonatomic) double animationDuration;
@property (nonatomic) @? comboEnd;
@property (nonatomic) CAShapeLayer progressLayer;
@property (nonatomic) UIBezierPath path;
- (void)_setupUIWithColors:;
- (id)comboEnd;
- (id)initWithFrame:andColors:comboEnd:;
- (void)setComboEnd:;
- (void)startCountdownAnimation;
- (void)stopCountdownAnimation;
- (id)path;
- (double)animationDuration;
- (void)setPath:;
- (id)initWithFrame:;
- (void)setAnimationDuration:;
- (void).cxx_destruct;
- (id)progressLayer;
- (void)setProgressLayer:;
@end
