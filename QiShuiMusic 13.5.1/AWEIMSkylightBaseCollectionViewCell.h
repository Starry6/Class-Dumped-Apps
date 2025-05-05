@interface AWEIMSkylightBaseCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView avatarContainerView;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) AWEIMOnlineContactAvatarViewModel model;
- (void)createComponents;
- (id)p_initAvatarView;
- (void)renderWithModel:;
- (void)resetUserKVOWithNewModel:oldModel:action:;
- (void)updateAvatarFromRemoteWithModel:;
- (id)model;
- (void)setModel:;
- (id)avatarView;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)nameLabel;
- (void)setNameLabel:;
- (id)avatarContainerView;
- (void)setAvatarContainerView:;
- (void)layoutComponents;
@end
