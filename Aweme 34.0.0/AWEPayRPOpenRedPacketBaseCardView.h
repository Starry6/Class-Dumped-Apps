@interface AWEPayRPOpenRedPacketBaseCardView : UIView
@property (nonatomic) AWEPayRPOpenRedPacketViewController openVC;
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView contentContainerView;
@property (nonatomic) UIImageView bottomCoverView;
@property (nonatomic) UIImageView overflowImageView;
@property (nonatomic) UIStackView headerStackView;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel ownerLabel;
@property (nonatomic) UILabel fromSendLabel;
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) UIView openTaskView;
@property (nonatomic) UIButton openButton;
@property (nonatomic) UIButton detailBtn;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) AWEPayMediaCoverView mediaCoverView;
@property (nonatomic) UIImageView footerLeftDecorationView;
@property (nonatomic) UIImageView footerRightDecorationView;
@property (nonatomic) UILabel footerLabel;
@property (nonatomic) UIView leftLineView;
@property (nonatomic) UILabel coverSubTitleView;
@property (nonatomic) UIView rightLineView;
@property (nonatomic) AWEPayRPLoadingView loadingView;
@property (nonatomic) AWEPayRPOpenRedPacketCardConfigModel cardConfigModel;
- (void)trackWithEvent:params:;
- (id)closeBtn;
- (void)setCloseBtn:;
- (void)releasePlayer;
- (id)leftLineView;
- (id)rightLineView;
- (void)setLeftLineView:;
- (void)setRightLineView:;
- (id)ownerLabel;
- (void)setOwnerLabel:;
- (void)setHeaderStackView:;
- (id)headerStackView;
- (id)bottomCoverView;
- (void)setBottomCoverView:;
- (id)mediaCoverView;
- (void)setMediaCoverView:;
- (id)coverSubTitleView;
- (id)p_createGradeLine:;
- (void)setCoverSubTitleView:;
- (void)setOpenVC:;
- (id)openVC;
- (id)bottomCoverAnimationView;
- (id)topCoverAnimationView;
- (id)contentAnimationView;
- (id)closeAnimationView;
- (void)setupOpenTaskView;
- (id)fromSendLabel;
- (id)detailBtn;
- (id)overflowImageView;
- (id)openTaskView;
- (id)footerLeftDecorationView;
- (id)footerRightDecorationView;
- (id)cardConfigModel;
- (id)p_snapShotImage:;
- (void)openRedPackage;
- (void)p_redirectToDetails;
- (id)initWithFrame:cardConfigModel:;
- (void)stopMediaCoverPlay;
- (void)resumeMediaCoverPlay;
- (void)updateInfoContentWithText:;
- (id)getOpenButtonName;
- (void)updateOpenTaskViewWithIsHidden:;
- (void)setOverflowImageView:;
- (void)setFromSendLabel:;
- (void)setOpenTaskView:;
- (void)setDetailBtn:;
- (void)setFooterLeftDecorationView:;
- (void)setFooterRightDecorationView:;
- (void)setCardConfigModel:;
- (id)contentContainerView;
- (void)startLoading;
- (void)setAvatarView:;
- (void)setLoadingView:;
- (void)updateContent;
- (void)setContentContainerView:;
- (void)stopLoading;
- (id)contentView;
- (id)loadingView;
- (id)avatarView;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)infoLabel;
- (void)setupUI;
- (void)setStatusLabel:;
- (id)openButton;
- (void)setOpenButton:;
- (void)setInfoLabel:;
- (id)statusLabel;
- (void)setFooterLabel:;
- (id)footerLabel;
@end
