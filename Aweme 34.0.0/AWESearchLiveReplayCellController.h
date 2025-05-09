@interface AWESearchLiveReplayCellController : UIViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isActive;
@property (nonatomic) AWESearchAutoPlayHandler autoPlayHandler;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIView liveReplayContainerView;
@property (nonatomic) double startPlayerTime;
@property (nonatomic) NSString keyWord;
@property (nonatomic) NSString searchId;
@property (nonatomic) NSString referString;
@property (nonatomic) AWESearchVideoView liveReplayView;
@property (nonatomic) double startLoadingTime;
@property (nonatomic) BOOL didShowInVC;
@property (nonatomic) UIView headerView;
@property (nonatomic) UIImageView userImageView;
@property (nonatomic) UIView<AWEFeedLiveMarkViewProtocol> liveMarkView;
@property (nonatomic) UILabel userNameLabel;
@property (nonatomic) UIImageView verificationBadgeView;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UIView liveActionView;
@property (nonatomic) UIImageView replayMarkView;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) BOOL isLiveStreaming;
@property (nonatomic) UIView liveUserInfoView;
@property (nonatomic) NSString explainingProductID;
@property (nonatomic) AWESearchEcommerceAnchorModel firstGoodsModel;
@property (nonatomic) AWESearchLiveMultiStyleGoodsView goodsView;
@property (nonatomic) AWESearchTracker searchTracker;
@property (nonatomic) BOOL shouldPreventResign;
@property (nonatomic) NSDictionary commonTrackParams;
@property (nonatomic) NSDate playerStartDate;
@property (nonatomic) BOOL isActive;
@property (nonatomic) AWESearchAutoPlayHandler autoPlayHandler;
@property (nonatomic) BOOL fixSearchId;
@property (nonatomic) <AWEModernFeedCellContext> context;
@property (nonatomic) AWESearchCachalotResultContext cachalotContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) # cardClass;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)referString;
- (void)setReferString:;
- (id)searchId;
- (void)setSearchId:;
- (id)ecomLiveParams;
- (void)avatarClicked;
- (id)commonTrackParams;
- (void)setLiveMarkView:;
- (id)liveMarkView;
- (id)userNameLabel;
- (id)userImageView;
- (void)setUserImageView:;
- (void)setUserNameLabel:;
- (void)componentPageViewWillAppear:;
- (void)componentPageViewDidAppear:;
- (void)componentPageViewWillDisappear:;
- (void)componentPageViewDidDisappear:;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)componentActivationDidChange:;
- (void)componentDidEndDisplay;
- (void)componentHighlighted:backgroundView:;
- (void)componentPrepareForReuse;
- (id)keyWord;
- (void)enterLiveRoom;
- (id)autoPlayHandler;
- (void)setAutoPlayHandler:;
- (BOOL)shouldNotActive;
- (void)updateWithReferString:;
- (BOOL)isMediaSourceCard;
- (void)didBecomeActiveForReason:;
- (void)didResignActiveForReason:;
- (void)setKeyWord:;
- (id)cachalotContext;
- (id)goodsView;
- (void)setGoodsView:;
- (id)searchTracker;
- (void)setSearchTracker:;
- (id)verificationBadgeView;
- (void)setCachalotContext:;
- (void)usernameClicked;
- (void)setShouldPreventResign:;
- (BOOL)shouldPreventResign;
- (double)startPlayerTime;
- (void)setStartPlayerTime:;
- (void)setStartLoadingTime:;
- (double)startLoadingTime;
- (void)setIsLiveStreaming:;
- (void)pausePlayer;
- (id)liveUserInfoView;
- (void)hideGoodsView;
- (void)updateDescriptionLabelWithBottomCardViewOffset:;
- (void)liveViewTapped;
- (BOOL)fixSearchId;
- (void)trackSearchResultShow;
- (void)setupDescriptionLabelStyleWeak:;
- (id)liveActionView;
- (void)updateDescriptionLabelStyle;
- (void)updateVerificationBadgeViewImage;
- (void)setFirstGoodsModel:;
- (void)setExplainingProductID:;
- (void)updateUIAfterModelUpdate;
- (BOOL)didShowInVC;
- (void)setDidShowInVC:;
- (void)traskSearchLiveDuration:;
- (void)enterProfilePage;
- (id)firstGoodsModel;
- (id)defaultEnterFromMerge;
- (void)onGoodsViewClickedWith:index:;
- (void)onMoreGoodsViewClicked;
- (BOOL)onGoodsViewLiveIsLandscape;
- (double)onGoodsViewLiveAspectRatio;
- (void)setFixSearchId:;
- (void)setLiveUserInfoView:;
- (void)setVerificationBadgeView:;
- (void)setLiveActionView:;
- (id)explainingProductID;
- (id)liveReplayContainerView;
- (id)liveReplayView;
- (id)replayMarkView;
- (void)startPlayer;
- (id)playerStartDate;
- (void)setPlayerStartDate:;
- (void)trackSearchResultClickEvent:;
- (id)detailTrackParamsWithEnterMethod:showSKU:;
- (void)enterVideoDetailWithLogExtra:;
- (void)trackLivesdkExplainReplayEntranceClickEvent:;
- (void)trackEnterPersonalDetailEvent;
- (void)setLiveReplayContainerView:;
- (void)setLiveReplayView:;
- (void)setReplayMarkView:;
- (void)didBecomeActive;
- (BOOL)hasVideo;
- (void)setIsActive:;
- (void)dealloc;
- (void)setDescriptionLabel:;
- (id)videoView;
- (void)viewDidLoad;
- (void)didResignActive;
- (id)initWithContext:;
- (id)transitionContext;
- (id)headerView;
- (void)viewDidDisappear:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (BOOL)isActive;
- (id)context;
- (void)setHeaderView:;
- (id)gradientLayer;
- (id)componentView;
- (void)setGradientLayer:;
- (id)activeView;
- (void)updateWithViewModel:;
- (void)updateWithModel:;
- (BOOL)isLiveStreaming;
+ (double)modernFeedCellPreferedHeightForModel:width:;
+ (id)sizeWithViewModel:width:;
+ (id)sizeWithSizeString:;
+ (void)__awe__codeRunnerRun___LINE__;
+ (id)livePlayerSizeWithModel:;
+ (BOOL)isLandScapeWithModel:;
+ (BOOL)isSquareLiveCardForModel:;
+ (long long)getCommodityStyleVersionWith:;
@end
