@interface AWEConcernUpdateInnerPushView : UIView
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel extTagLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIButton actionButton;
@property (nonatomic) <AWEConcernUpdateInnerPushViewDelegate> delegate;
- (void)setExtTagLabel:;
- (id)extTagLabel;
- (id)delegate;
- (void)setAvatarView:;
- (id)intrinsicContentSize;
- (id)initWithDelegate:;
- (void)updateView;
- (id)iconView;
- (id)avatarView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
