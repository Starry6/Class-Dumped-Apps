@interface IESLiveSaaSAnchorRankListTopThreeItemView : UIView
@property (nonatomic) q rank;
@property (nonatomic) IESLiveSaaSRankListFilePowerView firePowerView;
@property (nonatomic) IESLiveSaaSAnchorRankListAvatarView avatarView;
@property (nonatomic) IESLiveSaaSAnchorRankListCellViewModel viewModel;
@property (nonatomic) UIImageView rankImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) IESLiveSaaSAnchorRankListFollowButton followButton;
- (void)didClick;
- (id)firePowerView;
- (id)followButton;
- (id)initWithRank:;
- (id)rankImageView;
- (void)setFirePowerView:;
- (void)setFollowButton:;
- (void)setRankImageView:;
- (id)viewModel;
- (void)layoutSubviews;
- (id)avatarView;
- (void)setAvatarView:;
- (long long)rank;
- (void).cxx_destruct;
- (void)setRank:;
- (void)setViewModel:;
- (id)nameLabel;
- (void)setNameLabel:;
- (void)updateWithViewModel:;
@end
