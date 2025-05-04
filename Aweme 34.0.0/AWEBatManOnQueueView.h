@interface AWEBatManOnQueueView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIButton playButton;
@property (nonatomic) UIView bottomBar;
@property (nonatomic) @? playBlock;
- (id)playBlock;
- (void)setPlayBlock:;
- (id)intrinsicContentSize;
- (void)setBottomBar:;
- (id)initWithFrame:;
- (id)bottomBar;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)playAction;
- (id)playButton;
- (void)updateWithModel:;
- (void)setPlayButton:;
@end
