@interface IESLivePKGuestInteractiveInviteMoreCell : UITableViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton inviteMoreBtn;
@property (nonatomic) BOOL disableButtonClick;
@property (nonatomic) @? didClickInviteMore;
- (id)didClickInviteMore;
- (void)didTapInviteMoreButton;
- (BOOL)disableButtonClick;
- (id)inviteMoreBtn;
- (void)setDidClickInviteMore:;
- (void)setDisableButtonClick:;
- (void)setInviteMoreBtn:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
@end
