@interface IESLiveSaaSCleanScreenProfileView : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) IESLiveSaaSAvatarImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) @? actionBlock;
- (void)didClick;
- (void)renderUser:;
- (id)backgroundView;
- (id)avatarView;
- (id)actionBlock;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (id)nameLabel;
- (void)setNameLabel:;
- (void)setActionBlock:;
- (void)setupViews;
@end
