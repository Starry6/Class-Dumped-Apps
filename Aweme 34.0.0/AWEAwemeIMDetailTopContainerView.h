@interface AWEAwemeIMDetailTopContainerView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) AWEButton userAvatarView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel supplementaryLabel;
@property (nonatomic) @? avatarClickedBlock;
- (void)p_setupUI;
- (void)setUserAvatarView:;
- (id)userAvatarView;
- (void)p_setupConstraints;
- (void)updateViewWithAvatarUrl:naviTitle:repliedText:;
- (id)avatarClickedBlock;
- (void)setAvatarClickedBlock:;
- (id)init;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSupplementaryLabel:;
- (id)supplementaryLabel;
@end
