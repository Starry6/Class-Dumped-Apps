@interface AWEIMEmojiMutableAuthorListViewCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton checkButton;
@property (nonatomic) AWEIMEmojiAuthor authorModel;
- (void)onButtonClicked:;
- (id)authorModel;
- (void)setAuthorModel:;
- (void)setCheckButton:;
- (id)checkButton;
- (void)renderModel:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)avatarView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
