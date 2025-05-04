@interface AWEBasicModePlayInteractionUserAvatarView : UIView
@property (nonatomic) UIView<AWEAdAvatarView> userAvatarView;
@property (nonatomic) UIView followPromptView;
- (void)setUserAvatarView:;
- (void)setFollowPromptView:;
- (id)userAvatarView;
- (id)followPromptView;
- (void)makeConstraints;
- (id)init;
- (void).cxx_destruct;
@end
