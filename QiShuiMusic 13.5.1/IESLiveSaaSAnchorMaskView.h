@interface IESLiveSaaSAnchorMaskView : UIView
@property (nonatomic) IESLiveSaaSUserModel anchor;
@property (nonatomic) UIImageView backgroundAvatarView;
- (id)backgroundAvatarView;
- (id)initWithFrame:anchor:;
- (void)renderUI;
- (void)setBackgroundAvatarView:;
- (id)anchor;
- (void)setAnchor:;
- (void).cxx_destruct;
@end
