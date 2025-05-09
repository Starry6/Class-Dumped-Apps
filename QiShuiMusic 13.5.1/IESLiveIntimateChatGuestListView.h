@interface IESLiveIntimateChatGuestListView : UIView
@property (nonatomic) UIView slotContainerView;
@property (nonatomic) IESLiveInteractiveApplyView applyComponent;
@property (nonatomic) IESLiveMultiInteractUserService userService;
@property (nonatomic) NSMutableDictionary uidToGuestView;
@property (nonatomic) NSMutableDictionary uidToStrongRemindView;
@property (nonatomic) NSMutableDictionary uidToRTCInfoContainerView;
@property (nonatomic) NSMutableArray slots;
@property (nonatomic) double itemPortraitSpace;
@property (nonatomic) double itemSideLength;
@property (nonatomic) IESLiveIntimateChatSlotView bottomSlot;
@property (nonatomic) IESLiveIntimateChatSlotView topSlot;
@property (nonatomic) <IESLiveIntimateChatGuestListViewDelegate> delegate;
@property (nonatomic) BOOL isLinker;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hideAllSessions;
- (id)p_creatInfoView;
- (void)setUserService:;
- (id)topSlot;
- (void)showAllSessions;
- (void)updateApplyView;
- (void)addOwnPreview:;
- (void)addStrongRemindUser:;
- (void)ajustViewPositionIfNeeded:;
- (id)anchorFindEmptySoltView;
- (id)applyComponent;
- (id)bottomSlot;
- (void)clearListView;
- (void)closeAllStrongRemindViews;
- (void)didSetAttachingDIContext;
- (void)didSingChallengeClosed;
- (id)findEmptySlotWithReverse;
- (void)forceUpdateActiveList;
- (void)hideApplyView;
- (BOOL)isLinker;
- (double)itemPortraitSpace;
- (double)itemSideLength;
- (BOOL)needDelayForShowIncomePromptWithOfflineUid:;
- (void)onActiveListDidChangeFrom:to:;
- (void)onApplyComponentClick;
- (void)onSwitchConnectMode;
- (id)p_creatInfoViewWithEnableRadius:;
- (id)p_createStrongReminderViewWithUser:;
- (void)p_exchangeSoltItemWithAnimation:;
- (void)p_exchangeSoltItemWithAnimation:completion:;
- (BOOL)p_isEmptyGuestListView;
- (void)p_sortSolts;
- (void)removeStrongRemindUserId:;
- (void)resetSoltsWithAppData:;
- (void)setApplyComponent:;
- (void)setBottomSlot:;
- (void)setIsLinker:;
- (void)setItemPortraitSpace:;
- (void)setItemSideLength:;
- (void)setSlotContainerView:;
- (void)setTopSlot:;
- (void)setUidToGuestView:;
- (void)setUidToRTCInfoContainerView:;
- (void)setUidToStrongRemindView:;
- (void)showApplyView;
- (void)showGuestInfoViewIncomPromptWithOfflineUid:;
- (void)showGuestInfoViewIncomPromptWithSession:;
- (id)slotContainerView;
- (id)uidToGuestView;
- (id)uidToRTCInfoContainerView;
- (id)uidToStrongRemindView;
- (void)updateApplyComponentStatus:;
- (void)updateCurrentSinger:;
- (void)updateGuestInfoFanticketHidden:isHost:;
- (void)updateLayoutWithAppData:;
- (void)updateLayoutWithLayoutMachine:;
- (void)updateLayoutWithSessions:;
- (id)userModelWrapperConfig;
- (id)userService;
- (id)initWithConfig:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setupUI;
- (id)slots;
- (unsigned long long)sessionCount;
- (void)setSlots:;
@end
