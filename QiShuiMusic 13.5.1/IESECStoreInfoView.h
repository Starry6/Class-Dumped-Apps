@interface IESECStoreInfoView : UIView
@property (nonatomic) IESECStoreInfoViewModel viewModel;
@property (nonatomic) UIImageView logoImageView;
@property (nonatomic) UIView logoBorderView;
@property (nonatomic) UIView infoContainerView;
@property (nonatomic) UIView titleView;
@property (nonatomic) IESECRelationTruncatedTextView nameView;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) IESECStoreReputationView reputationView;
@property (nonatomic) UIView<IESECStoreAccountInfoViewProtocol> accountInfoView;
@property (nonatomic) IESECRelationMultipleFunctionsFollowView followView;
@property (nonatomic) IESECRelationBubbleView bubbleView;
@property (nonatomic) @? followClose;
@property (nonatomic) IESECServiceProxy<IESECShopThemeService> themeService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)accountInfoView;
- (void)setFollowClose:;
- (void)transferToStoreOwnerProfilePage;
- (void)addPopupTask;
- (BOOL)canShowBubble;
- (id)followClose;
- (id)followView;
- (id)infoContainerView;
- (void)jumpToAccountProfile;
- (void)jumpToStoreDetail:;
- (id)logoBorderView;
- (void)p_bindViewModel:;
- (void)p_updateFollowViewMode;
- (void)p_updateNameView;
- (id)reputationView;
- (void)setAccountInfoView:;
- (void)setFollowView:;
- (void)setInfoContainerView:;
- (void)setLogoBorderView:;
- (void)setReputationView:;
- (void)setThemeService:;
- (void)showWithTask:closeCallback:;
- (id)themeService;
- (void)transferToStoreDetailPage;
- (void)updateInfoViewWithPercent:;
- (void)updateInfoViewWithStyle:;
- (void)setTitleView:;
- (id)viewModel;
- (id)nameView;
- (void)setNameView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleView;
- (void)setViewModel:;
- (void)setupViews;
- (id)logoImageView;
- (void)setLogoImageView:;
- (id)bubbleView;
- (void)setBubbleView:;
- (double)viewHeight;
- (id)arrowImageView;
- (void)setArrowImageView:;
@end
