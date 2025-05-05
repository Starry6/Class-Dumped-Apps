@interface IESLiveInteractiveApplyView : UIView
@property (nonatomic) UIImageView applyImageView;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> animationView;
@property (nonatomic) UILabel titleLabel;
- (id)applyImageView;
- (void)setApplyImageView:;
- (void)setupViewsWithContainerWidth:;
- (void)showApplyingAnimationView;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)animationView;
- (void)setAnimationView:;
- (void)updateWithStatus:;
@end
