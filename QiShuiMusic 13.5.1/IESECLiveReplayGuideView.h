@interface IESECLiveReplayGuideView : UIView
@property (nonatomic) LOTAnimationView animationView;
@property (nonatomic) UILabel guideLabel;
- (id)guideLabel;
- (void)guideViewDidTap:;
- (id)initWithAimationFilePath:;
- (void)setGuideLabel:;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)animationView;
- (void)setAnimationView:;
@end
