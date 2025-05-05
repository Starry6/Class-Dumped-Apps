@interface IESLiveSaaSAnchorRankListCell : UITableViewCell
@property (nonatomic) IESLiveSaaSRankListFilePowerView firePowerView;
@property (nonatomic) IESLiveSaaSAnchorRankListAvatarView avatarView;
@property (nonatomic) IESLiveSaaSAnchorRankListCellViewModel viewModel;
@property (nonatomic) IESLiveSaaSAnchorRankListFollowButton followButton;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel rankLabel;
@property (nonatomic) <IESLiveToastFactory> toastFactory;
- (id)firePowerView;
- (id)followButton;
- (void)setFirePowerView:;
- (void)setFollowButton:;
- (void)setToastFactory:;
- (id)toastFactory;
- (id)initWithStyle:reuseIdentifier:;
- (void)setupConstraints;
- (id)viewModel;
- (id)avatarView;
- (void)setAvatarView:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)nameLabel;
- (void)setNameLabel:;
- (void)updateWithViewModel:;
- (id)rankLabel;
- (void)setRankLabel:;
@end
