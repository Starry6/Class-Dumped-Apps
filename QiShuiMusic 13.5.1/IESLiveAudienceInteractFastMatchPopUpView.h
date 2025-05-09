@interface IESLiveAudienceInteractFastMatchPopUpView : UIView
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} originFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} guideStyleFrame;
@property (nonatomic) <IESLiveAudienceInteractFastMatchPopUpViewDelegate> delegate;
@property (nonatomic) IESLiveAudienceInteractFastMatchPopUpViewConfig config;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView headerContainerView;
@property (nonatomic) UIImageView topLeftIamgeView;
@property (nonatomic) UILabel mainTitleLabel;
@property (nonatomic) UIButton linkMicBtn;
@property (nonatomic) UIButton debugInfoBtn;
@property (nonatomic) UIView lineView;
@property (nonatomic) UIView fastMatchContainerView;
@property (nonatomic) UIView mainImageContainerView;
@property (nonatomic) UIView matchGuideImageContainerView;
@property (nonatomic) UIImageView matchGuideStaticView;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> matchGuideAnimationView;
@property (nonatomic) UIView avatartImageContainerView;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView genderImageView;
@property (nonatomic) UILabel secondaryTitleLabel;
@property (nonatomic) UIView tagViewsContainer;
@property (nonatomic) UILabel matchHintLabel;
@property (nonatomic) UIButton matchBtn;
@property (nonatomic) IESLiveMultiAudioAudienceFastMatchBackgroundView fastMatchContainerBgView;
@property (nonatomic) IESLiveInteractLinkMicMatchSuccessPanel successPanel;
@property (nonatomic) IESLiveGCDTimer timer;
@property (nonatomic) BOOL isGuideAnimating;
@property (nonatomic) RACDisposable autoHideDisposable;
@property (nonatomic) IESLiveAudienceInteractiveListView applyListView;
@property (nonatomic) <IESLiveAudienceInteractFastMatchPopUpViewDataSource> dataSource;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) IESLiveFastMatchEntryView fastMatchEntryView;
@property (nonatomic) UIView preApplySelfCellView;
@property (nonatomic) BOOL showApplyList;
@property (nonatomic) UIView applyListHeaderView;
@property (nonatomic) UILabel applyListHeaderLeftLabel;
@property (nonatomic) IESLivePaidQueueTabView paidQueueTabHeaderView;
@property (nonatomic) UILabel applyListHeaderRightLabel;
@property (nonatomic) IESLiveWaitingListUser waitingUser;
@property (nonatomic) BOOL isCancelSucPanel;
@property (nonatomic) UIView addPriceApplyListHeaderView;
@property (nonatomic) UILabel addPriceApplyListHeaderRightLabel;
@property (nonatomic) BOOL hasTrackAddPriceBtnShowWithRank;
@property (nonatomic) Q waitingListType;
@property (nonatomic) UILabel secondaryCenterTitleLabel;
@property (nonatomic) IESLiveInteractMatchSuccessRoomListPanel roomListPanel;
@property (nonatomic) BOOL shouldTrackAddQueueBtnShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)genderImageView;
- (BOOL)hasTrackAddPriceBtnShowWithRank;
- (BOOL)p_isSmallScreen;
- (unsigned long long)waitingListType;
- (id)guideStyleFrame;
- (void)setAddPriceApplyListHeaderView:;
- (void)setOriginFrame:;
- (void)setWaitingUser:;
- (void)updateTopAreaUI;
- (id)addPriceApplyListHeaderRightLabel;
- (id)addPriceApplyListHeaderView;
- (id)applyListHeaderLeftLabel;
- (id)applyListHeaderRightLabel;
- (id)applyListHeaderView;
- (id)applyListView;
- (void)audienceDidRematch;
- (id)autoHideDisposable;
- (id)avatartImageContainerView;
- (void)bindDataProvider;
- (id)debugInfoBtn;
- (void)didHideMatchPanel;
- (void)didSetAttachingDIContext;
- (void)didShowMatchPanel;
- (void)didTapCancelButtonWithView:;
- (void)didTapConfirmButtonWithView:;
- (void)didTapRematchButtonWithView:;
- (id)disposable;
- (id)fastMatchContainerBgView;
- (id)fastMatchContainerView;
- (id)fastMatchEntryView;
- (id)initWithFrame:delegate:dataSource:;
- (BOOL)isCancelSucPanel;
- (BOOL)isGuideAnimating;
- (id)linkMicBtn;
- (id)mainImageContainerView;
- (id)mainTitleLabel;
- (id)matchBtn;
- (id)matchGuideAnimationView;
- (id)matchGuideImageContainerView;
- (id)matchGuideStaticView;
- (id)matchHintLabel;
- (id)originFrame;
- (id)p_addPriceApplyUserList;
- (id)p_getProperSubStringWithEmojiString:limitLength:;
- (void)p_hideRoomListPanel;
- (void)p_hideSuccessPanel;
- (void)p_initApplyListView;
- (BOOL)p_isInPaidLinkmicMultiAddPrice;
- (BOOL)p_isSortByApplyTime;
- (id)p_normalApplyUserList;
- (BOOL)p_oldPaidLinkmicOpen;
- (void)p_refreshFastEntryBtnEnabled;
- (void)p_refreshPopUpViewUIWithUpdateEmptyViewHiddeStatus:;
- (id)p_rightLabelString;
- (void)p_showApplyListView;
- (void)p_showFastmatchView;
- (void)p_showRoomListPanel;
- (void)p_showSuccessPanel;
- (void)p_startGuideAnimationIfNeeded;
- (void)p_stopGuideAnimation;
- (void)p_trackAddPriceBtnShowW;
- (void)p_trackEvent:params:;
- (void)p_updateConfigEnableFastMatchStatus;
- (void)p_updateEmptyViewConfig;
- (void)p_updateEmptyViewHiddenStatus;
- (void)p_updatePreApplyStyle;
- (id)paidQueueTabHeaderView;
- (id)preApplySelfCellView;
- (void)requestActivityForSite:;
- (id)roomListPanel;
- (id)secondaryCenterTitleLabel;
- (id)secondaryTitleLabel;
- (void)setAddPriceApplyListHeaderRightLabel:;
- (void)setApplyListHeaderLeftLabel:;
- (void)setApplyListHeaderRightLabel:;
- (void)setApplyListHeaderView:;
- (void)setApplyListView:;
- (void)setAutoHideDisposable:;
- (void)setAvatartImageContainerView:;
- (void)setDebugInfoBtn:;
- (void)setDisposable:;
- (void)setFastMatchContainerBgView:;
- (void)setFastMatchContainerView:;
- (void)setFastMatchEntryView:;
- (void)setGenderImageView:;
- (void)setGuideStyleFrame:;
- (void)setHasTrackAddPriceBtnShowWithRank:;
- (void)setIsCancelSucPanel:;
- (void)setIsGuideAnimating:;
- (void)setLinkMicBtn:;
- (void)setMainImageContainerView:;
- (void)setMainTitleLabel:;
- (void)setMatchBtn:;
- (void)setMatchGuideAnimationView:;
- (void)setMatchGuideImageContainerView:;
- (void)setMatchGuideStaticView:;
- (void)setMatchHintLabel:;
- (void)setPaidQueueTabHeaderView:;
- (void)setPreApplySelfCellView:;
- (void)setRoomListPanel:;
- (void)setSecondaryCenterTitleLabel:;
- (void)setSecondaryTitleLabel:;
- (void)setShouldTrackAddQueueBtnShow:;
- (void)setShowApplyList:;
- (void)setSuccessPanel:;
- (void)setTagViewsContainer:;
- (void)setTopLeftIamgeView:;
- (void)setWaitingListType:;
- (void)setupApplyListUI;
- (void)setupGuideStyleUIIfNeeded;
- (BOOL)shouldTrackAddQueueBtnShow;
- (BOOL)showApplyList;
- (void)showUserPreView:trackerLabel:;
- (void)startAutoHideAfter:;
- (id)successPanel;
- (id)tagViewsContainer;
- (id)topLeftIamgeView;
- (void)trackAddPriceQueueFastEntryShowIfNeeded;
- (void)updateAddPriceBtnUserInterfaceEnable:;
- (void)updateFastMatchRoomListUI;
- (void)updateFastMatchUI;
- (void)updateWaitingListType:updateEmptyViewHiddeStatus:;
- (id)waitingUser;
- (void)updateWithConfig:;
- (void)setDataSource:;
- (void)stopTimer;
- (void)dealloc;
- (id)containerView;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setConfig:;
- (void)setContainerView:;
- (void)setDelegate:;
- (void)setTimer:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)tableView:viewForHeaderInSection:;
- (id)dataSource;
- (id)delegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (id)timer;
- (double)tableView:heightForHeaderInSection:;
- (id)config;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (id)headerContainerView;
- (void)setHeaderContainerView:;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)startTimerIfNeeded;
@end
