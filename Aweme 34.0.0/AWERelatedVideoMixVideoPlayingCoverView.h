@interface AWERelatedVideoMixVideoPlayingCoverView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) LOTAnimationView playAnimationView;
@property (nonatomic) UIView containerView;
- (id)playAnimationView;
- (void)setPlayAnimationView:;
- (void)setLabel:;
- (void)play;
- (id)initWithFrame:;
- (id)containerView;
- (id)label;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)stop;
- (void)configureSubviews;
- (void)configureConstraints;
@end
