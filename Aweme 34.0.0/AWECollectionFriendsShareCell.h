@interface AWECollectionFriendsShareCell : UICollectionViewCell
@property (nonatomic) AWEFriendsShareItem item;
@property (nonatomic) UIButton avatarButton;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) NSMutableParagraphStyle paragraphStyle;
@property (nonatomic) <AWECollectionFriendsShareCellDelegate> delegate;
- (void)onAvatarButtonTap:;
- (void)reuseWithItem:;
- (id)delegate;
- (void)setItem:;
- (id)initWithFrame:;
- (id)item;
- (id)nameLabel;
- (id)paragraphStyle;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setNameLabel:;
- (void)setupUI;
- (void)setParagraphStyle:;
- (id)avatarButton;
- (void)setAvatarButton:;
@end
