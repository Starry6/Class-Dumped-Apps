@interface AWEPublishSuccessBottomViewIMTableViewCell : UITableViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIView separator;
@property (nonatomic) BOOL shared;
@property (nonatomic) UIButton selectButton;
@property (nonatomic) <AWEPublishSuccessBottomViewIMTableViewCellDelegate> delegate;
- (void)configWithShareModel:;
- (void)setSeparator:;
- (id)separator;
- (id)delegate;
- (void)setAvatarView:;
- (id)avatarView;
- (BOOL)shared;
- (void)setShared:;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setNameLabel:;
- (void)showSeparator:;
- (void)setupUI;
- (id)selectButton;
- (void)setSelectButton:;
@end
