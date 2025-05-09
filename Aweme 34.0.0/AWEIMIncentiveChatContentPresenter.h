@interface AWEIMIncentiveChatContentPresenter : AWEIMUIViewPresenter
@property (nonatomic) AWEIMUIImageViewPresenter background;
@property (nonatomic) AWEIMUIImageViewPresenter icon;
@property (nonatomic) AWEIMDoubleAvatarViewPresenter doubleAvatar;
@property (nonatomic) AWEIMGestureUIViewPresenter subtitleContainer;
@property (nonatomic) AWEIMUILabelPresenter title;
@property (nonatomic) AWEIMUILabelPresenter subTitle;
@property (nonatomic) AWEIMUIButtonPresenter button;
@property (nonatomic) CAGradientLayer gradientLayer;
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (void)didReceiveProps:;
- (void)themeDidChangeNoti:;
- (void)p_updateTitle;
- (void)p_updateSubtitle;
- (id)doubleAvatar;
- (void)p_updateBackground;
- (void)p_updateButton;
- (void)p_updateIconOrDoubleAvatar;
- (void)setDoubleAvatar:;
- (id)icon;
- (void)setButton:;
- (id)initWithContext:;
- (void)setSubTitle:;
- (id)subTitle;
- (id)background;
- (void)setBackground:;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)button;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (id)subtitleAttributedString;
- (void)setSubtitleContainer:;
- (id)subtitleContainer;
@end
