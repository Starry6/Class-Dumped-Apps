@interface AWEMusicDetailContainerViewHolder : AWEBaseTabListViewHolder
@property (nonatomic) @? duetButtonClickHandler;
@property (nonatomic) AWENavigationBar navigationBar;
@property (nonatomic) BOOL viewDidAppearOnce;
@property (nonatomic) UIView naviBarButtonCustomView;
@property (nonatomic) AWEDetailNewStyleShootButton actionButton;
@property (nonatomic) AWELuckyCatRewardBubbleView rewardBubbleView;
@property (nonatomic) UIButton shareToStoryButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton musicPlanEntryButton;
@property (nonatomic) AWEButton shareBtn;
@property (nonatomic) AWEButton topShareBtn;
@property (nonatomic) AWECollectionButton navCollectionBtn;
@property (nonatomic) AWEGradientView gradientMaskView;
@property (nonatomic) DUXPopover favoritePopover;
@property (nonatomic) AWEBizUIBubble favoriteHintBubble;
@property (nonatomic) AWEButton closeBtn;
@property (nonatomic) AWECollectionButton headerCollectionButton;
@property (nonatomic) double favoriteHintBubbleYOffset;
@property (nonatomic) BOOL isCollectRequesting;
@property (nonatomic) BOOL isShareEnabled;
@property (nonatomic) @? actionButtonHandler;
@property (nonatomic) @? collectionHandler;
@property (nonatomic) @? didTapFavouriteHintHandler;
@property (nonatomic) @? shareButtonHandler;
@property (nonatomic) @? shareToStoryButtonShowHandler;
@property (nonatomic) @? shareToStoryButtonClickHandler;
- (void)setupViewHolder;
- (id)aAWEPadModuleAdapter;
- (id)gradientMaskView;
- (void)setGradientMaskView:;
- (id)closeBtn;
- (void)setCloseBtn:;
- (id)shareBtn;
- (void)setShareBtn:;
- (id)favoriteHintBubble;
- (void)setFavoriteHintBubble:;
- (void)onActionButtonClicked:;
- (void)buildTopShareButton;
- (id)p_detailCollectionBottomNoticeText;
- (void)setIsCollectRequesting:;
- (BOOL)isCollectRequesting;
- (id)rewardBubbleView;
- (void)viewWillDisppear;
- (void)setupNavigationBar:;
- (id)naviBarButtonCustomView;
- (id)navCollectionBtn;
- (void)updateButtonWidth;
- (void)setHeaderCollectionButton:;
- (double)favoriteHintBubbleYOffset;
- (void)setFavoriteHintBubbleYOffset:;
- (void)updateCollectionUI:isCollected:;
- (void)setCollectionHandler:;
- (void)setDidTapFavouriteHintHandler:;
- (void)setActionButtonHandler:;
- (void)addMusicPlanEntryButtonInNavigationBar:activityResourceInfo:;
- (id)musicPlanEntryButton;
- (void)setShareToStoryButtonClickHandler:;
- (void)setShareToStoryButtonShowHandler:;
- (void)setShareButtonHandler:;
- (void)containerScrollViewDidScroll:headerView:naviBar:;
- (void)reLayoutActionButtonWithView:;
- (id)topShareBtn;
- (void)handleBottomTipShowNotice;
- (void)handleBottomTipHideNotice;
- (void)buildActionButton;
- (void)buildRewardBubbleView;
- (void)addGradientMaskView;
- (double)p_actionButonWidth;
- (id)shareToStoryButton;
- (BOOL)viewDidAppearOnce;
- (void)onShareToStoryButtonShow;
- (void)setViewDidAppearOnce:;
- (void)removeFavoriteHint;
- (id)favoritePopover;
- (id)didTapFavouriteHintHandler;
- (void)setFavoritePopover:;
- (id)headerCollectionButton;
- (id)collectionHandler;
- (void)setMusicPlanEntryButton:;
- (id)shareToStoryButtonShowHandler;
- (void)p_onShareToStoryButtonClicked_IMP:;
- (id)shareToStoryButtonClickHandler;
- (void)_onShareButtonClicked_IMP:;
- (id)shareButtonHandler;
- (void)onShareBtnClicked:;
- (void)onCollectionBtnClicked:;
- (void)onShareToStoryButtonClicked:;
- (void)setRewardBubbleView:;
- (void)setShareToStoryButton:;
- (void)setTopShareBtn:;
- (void)setNavCollectionBtn:;
- (id)duetButtonClickHandler;
- (void)setDuetButtonClickHandler:;
- (id)navigationBar;
- (id)init;
- (void)dealloc;
- (void)setTitleLabel:;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)viewDidAppear;
- (void)setNavigationBar:;
- (id)actionButton;
- (void)setActionButton:;
- (void)themeDidChange;
- (id)actionButtonHandler;
- (BOOL)isShareEnabled;
- (void)setIsShareEnabled:;
+ (Class)aAWEPadModuleAdapterClass;
@end
