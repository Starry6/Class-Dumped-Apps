@interface AWEHotSearchCommentTitleFlameView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) DUXBaseImageView flameImageView;
- (void)makeConstraint;
- (void)updateToLightTheme;
- (id)flameImageView;
- (void)updateToDarkTheme;
- (void)updateToGrayTheme;
- (void)setFlameImageView:;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupUI;
@end
