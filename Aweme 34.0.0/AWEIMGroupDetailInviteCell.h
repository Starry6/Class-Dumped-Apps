@interface AWEIMGroupDetailInviteCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton wechatButton;
@property (nonatomic) UIButton qqButton;
@property (nonatomic) @? inviteBlock;
- (id)wechatButton;
- (id)qqButton;
- (void)setWechatButton:;
- (void)setQqButton:;
- (id)inviteBlock;
- (void)updateButton:;
- (void)qqButtonTapped:;
- (void)wechatButtonTapped:;
- (void)setInviteBlock:;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
