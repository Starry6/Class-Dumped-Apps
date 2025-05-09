@interface AWEOriginalSoundTrackViewHolder : UIView
@property (nonatomic) DUXPopover musicianGuidePopover;
@property (nonatomic) DUXLoadingParticleView loadingView;
@property (nonatomic) UIButton tipsButton;
@property (nonatomic) UIViewController<AWEOriginalSoundTrackViewHolderProtocol> delegate;
@property (nonatomic) UITableView ostTableView;
@property (nonatomic) AWEMusicBottomPlayerView playerView;
@property (nonatomic) AWEMusicianTrackFoot trackFoot;
@property (nonatomic) UIView musicianCenterHeader;
- (id)aweui_emptyPageBelowView;
- (id)tipsButton;
- (void)setTipsButton:;
- (void)loadingShow:;
- (id)ostTableView;
- (void)setOstTableView:;
- (void)refreshViewControllerState;
- (void)showNetRequestError;
- (void)showPlayerViewIfNeeded:;
- (void)showMusicianCenterGuideBubble;
- (void)hidenPlayerView:;
- (id)luna_mediaCellWithTableView:mediaModel:atIndexPath:;
- (void)setMusicianCenterHeader:;
- (id)trackFoot;
- (id)musicianCenterHeader;
- (void)setMusicianGuidePopover:;
- (id)musicianGuidePopover;
- (void)p_showCollectToast:;
- (void)tipsButtonClickAction;
- (void)luna_collectionBtnClickedWithAudio:;
- (void)setTrackFoot:;
- (id)delegate;
- (id)contentEdgeInsets;
- (id)initWithDelegate:;
- (void)setLoadingView:;
- (id)loadingView;
- (void)scrollViewDidScroll:;
- (void)setPlayerView:;
- (id)playerView;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setupUI;
- (double)footerBottomInset;
- (void)refreshData;
+ (BOOL)musicianCenterNotDisplayInProfileCard;
@end
