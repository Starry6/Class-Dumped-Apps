@interface AWEIMStreakPetElfInviteCardPresenter : AWEIMUIViewPresenter
@property (nonatomic) AWEIMUIImageViewPresenter icon;
@property (nonatomic) AWEIMYYLabelPresenter title;
@property (nonatomic) AWEIMYYLabelPresenter subTitle;
@property (nonatomic) AWEIMUIButtonPresenter button;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) AWEIMGestureUIViewPresenter allCardTapView;
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (id)allCardTapView;
- (void)setAllCardTapView:;
- (id)icon;
- (void)setButton:;
- (id)initWithContext:;
- (void)setSubTitle:;
- (id)subTitle;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)backgroundImageView;
- (id)button;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setBackgroundImageView:;
@end
