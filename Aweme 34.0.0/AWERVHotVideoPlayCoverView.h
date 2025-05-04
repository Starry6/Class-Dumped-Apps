@interface AWERVHotVideoPlayCoverView : UIView
@property (nonatomic) UIView hollowView;
@property (nonatomic) UIView playContainerView;
@property (nonatomic) UILabel playLabel;
@property (nonatomic) AWERelatedVideoPlayingAnimationView animationView;
- (id)playLabel;
- (void)setPlayLabel:;
- (id)playContainerView;
- (id)hollowView;
- (void)setHollowView:;
- (void)setPlayContainerView:;
- (void)play;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)stop;
- (void)setupUI;
- (id)animationView;
- (void)setAnimationView:;
@end
