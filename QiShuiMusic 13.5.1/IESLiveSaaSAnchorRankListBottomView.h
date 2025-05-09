@interface IESLiveSaaSAnchorRankListBottomView : UIView
@property (nonatomic) IESLiveSaaSAnchorRankListAvatarView avatarView;
@property (nonatomic) IESLiveSaaSAnchorRankListViewModel viewModel;
@property (nonatomic) UIButton sendGiftButton;
@property (nonatomic) UILabel footerExtraDescriptionLabel;
@property (nonatomic) UILabel gapDescriptionLabel;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel rankLabel;
- (void)setFooterExtraDescriptionLabel:;
- (void)bindViewModel;
- (void)didClickAvatar;
- (void)didClickExtraDescription;
- (void)didClickSendGiftButton;
- (id)footerExtraDescriptionLabel;
- (id)gapDescriptionLabel;
- (id)sendGiftButton;
- (void)setGapDescriptionLabel:;
- (void)setSendGiftButton:;
- (void)setupConstraints;
- (id)viewModel;
- (void)layoutSubviews;
- (id)avatarView;
- (void)setAvatarView:;
- (id)initWithViewModel:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)nameLabel;
- (void)setNameLabel:;
- (id)rankLabel;
- (void)setRankLabel:;
@end
