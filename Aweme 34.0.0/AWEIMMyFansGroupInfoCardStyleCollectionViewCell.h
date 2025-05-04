@interface AWEIMMyFansGroupInfoCardStyleCollectionViewCell : AWEIMFansGroupCardStyleCollectionViewCell
@property (nonatomic) UIButton inviteButton;
@property (nonatomic) <AWEIMMyFansGroupInfoCardStyleCollectionViewCellDelegate> delegate;
@property (nonatomic) AWEIMMyFansGroupInfoViewModel viewModel;
@property (nonatomic) NSString previousPage;
- (void)configWithViewModel:;
- (void)__updateUI;
- (id)inviteButton;
- (void)setInviteButton:;
- (void)__trackInviteFansClicked;
- (void)__inviteButtonClicked;
- (id)delegate;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)previousPage;
- (void)setPreviousPage:;
+ (id)identifier;
@end
