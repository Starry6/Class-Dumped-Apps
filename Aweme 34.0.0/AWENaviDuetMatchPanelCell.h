@interface AWENaviDuetMatchPanelCell : UITableViewCell
@property (nonatomic) BDImageView avatarImgView;
@property (nonatomic) UILabel userNameLabel;
@property (nonatomic) UIButton chooseButton;
@property (nonatomic) UIView seperateView;
@property (nonatomic) BOOL selectedCell;
@property (nonatomic) @? onSelectChangedBlock;
@property (nonatomic) <AWENaviUserProtocol> userModel;
- (id)userNameLabel;
- (void)setUserNameLabel:;
- (BOOL)isSelectedCell;
- (id)avatarImgView;
- (id)seperateView;
- (id)chooseButton;
- (id)onSelectChangedBlock;
- (void)touchUpInsideSelect:;
- (void)setOnSelectChangedBlock:;
- (void)setAvatarImgView:;
- (void)setChooseButton:;
- (void)setSeperateView:;
- (void)prepareForReuse;
- (id)initWithStyle:reuseIdentifier:;
- (void)setUserModel:;
- (void).cxx_destruct;
- (id)userModel;
- (void)setupSubviews;
- (void)setSelectedCell:;
@end
