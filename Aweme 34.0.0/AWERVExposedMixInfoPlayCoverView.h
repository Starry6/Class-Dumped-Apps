@interface AWERVExposedMixInfoPlayCoverView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel playLabel;
@property (nonatomic) AWERelatedVideoPlayingAnimationView animationView;
- (id)playLabel;
- (void)setPlayLabel:;
- (void)play;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)stop;
- (void)setupUI;
- (id)animationView;
- (void)setAnimationView:;
@end
