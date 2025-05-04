@interface AWEIMMultiTabShareSingleListTableViewCell : UITableViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) DUXBasicButton sendBtn;
@property (nonatomic) UIView separatorLine;
@property (nonatomic) AWEIMMultiTabShareSingleListCellViewModel viewModel;
- (void)p_setupUI;
- (void)configWithModel:;
- (id)sendBtn;
- (void)setSendBtn:;
- (void)p_updateBtnStyle;
- (void)p_onShareButtonClick;
- (void)setAvatarView:;
- (void)prepareForReuse;
- (id)viewModel;
- (id)avatarView;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (id)separatorLine;
- (void)setSeparatorLine:;
@end
