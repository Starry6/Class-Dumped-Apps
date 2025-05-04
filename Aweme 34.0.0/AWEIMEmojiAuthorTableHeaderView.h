@interface AWEIMEmojiAuthorTableHeaderView : UITableViewHeaderFooterView
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton gotoHomePageButton;
@property (nonatomic) UIView separatorLine;
@property (nonatomic) AWEIMEmojiAuthor author;
@property (nonatomic) <AWEIMEmojiAuthorTableHeaderViewDelegate> delegate;
- (void)__setupUIs;
- (id)gotoHomePageButton;
- (void)__didClickGoToHomePage;
- (void)setGotoHomePageButton:;
- (id)author;
- (id)delegate;
- (void)setAvatarView:;
- (id)avatarView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (id)titleLabel;
- (void)setAuthor:;
- (void)setDelegate:;
- (id)separatorLine;
- (void)setSeparatorLine:;
@end
