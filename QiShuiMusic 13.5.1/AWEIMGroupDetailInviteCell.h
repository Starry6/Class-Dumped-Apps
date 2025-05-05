@interface AWEIMGroupDetailInviteCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton wechatButton;
@property (nonatomic) UIButton qqButton;
@property (nonatomic) @? inviteBlock;
- (void)qqButtonTapped:;
- (void)setInviteBlock:;
- (id)inviteBlock;
- (id)qqButton;
- (void)setQqButton:;
- (void)setWechatButton:;
- (void)updateButton:;
- (id)wechatButton;
- (void)wechatButtonTapped:;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
