@interface IESLiveIntimateChatHostApplyItemView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> animationView;
@property (nonatomic) BOOL enabled;
- (void)didSetAttachingDIContext;
- (void)p_animateWithResourceName:;
- (void)renderLinkerUserState:;
- (void)renderStatus:;
- (BOOL)enabled;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)loadViews;
- (void)setIconImageView:;
- (id)animationView;
- (void)setAnimationView:;
@end
