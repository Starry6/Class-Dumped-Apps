@interface AWEIMMessageNewComerReportPresenter : AWEIMUIViewPresenter
@property (nonatomic) AWEIMUILabelPresenter welcomeTapLabel;
@property (nonatomic) AWEIMUILabelPresenter welcomeTitleLabel;
@property (nonatomic) AWEIMUIImageViewPresenter welcomeTapIcon;
@property (nonatomic) AWEIMGestureUIViewPresenter welcomeTapView;
@property (nonatomic) AWEIMGestureUIViewPresenter avatarTapView;
@property (nonatomic) AWEIMMultiAvatarsPresenter avatars;
- (void)didReceiveProps:;
- (void)setAvatars:;
- (id)avatarTapView;
- (id)welcomeTapView;
- (id)welcomeTapLabel;
- (id)welcomeTapIcon;
- (id)welcomeTitleLabel;
- (void)setWelcomeTapLabel:;
- (void)setWelcomeTitleLabel:;
- (void)setWelcomeTapIcon:;
- (void)setWelcomeTapView:;
- (void)setAvatarTapView:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)avatars;
@end
