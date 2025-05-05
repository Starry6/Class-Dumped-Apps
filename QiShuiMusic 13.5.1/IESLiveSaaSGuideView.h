@interface IESLiveSaaSGuideView : UIView
@property (nonatomic) LOTAnimationView animationView;
@property (nonatomic) UILabel upGuideLabel;
@property (nonatomic) BOOL isAnimationPlaying;
@property (nonatomic) @ observer;
- (void)_addObserve;
- (void)initUIWithAnimationName:animationSize:title:;
- (id)initWithFrame:animationName:animationSize:title:;
- (BOOL)isAnimationPlaying;
- (void)setIsAnimationPlaying:;
- (void)setUpGuideLabel:;
- (id)upGuideLabel;
- (void)updateAnimationConstraints;
- (void)dealloc;
- (void)play;
- (void)stop;
- (void)setObserver:;
- (void).cxx_destruct;
- (void)reset;
- (id)observer;
- (id)animationView;
- (void)setAnimationView:;
@end
