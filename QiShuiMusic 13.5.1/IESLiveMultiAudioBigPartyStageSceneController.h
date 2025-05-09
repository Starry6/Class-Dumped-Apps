@interface IESLiveMultiAudioBigPartyStageSceneController : NSObject
@property (nonatomic) <IESLiveRoomServiceAdapter> room;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveComponentContext componentContext;
@property (nonatomic) <IESLiveMultiAudioSceneControllerDataSource> dataSource;
@property (nonatomic) <IESLiveMultiAudioSceneControllerDelegate> delegate;
@property (nonatomic) IESLiveBigPartyEqualGuestListViewModel guestListViewModel;
@property (nonatomic) IESLiveBigPartyEqualGuestListView guestListView;
@property (nonatomic) IESLiveAudioBackgroundView bgView;
@property (nonatomic) IESLiveAudioBackgroundViewModel bgViewModel;
@property (nonatomic) IESLiveLayoutPlaceholderView placeholderView;
@property (nonatomic) IESLiveRightBottomMutuallyExclusiveItem bigPartyItem;
@property (nonatomic) IESLiveInteractThemeManager manager;
@property (nonatomic) <IESLiveInteractionLinkerService> linker;
@property (nonatomic) IESLiveInteractionLayout layout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)frameOfSlotView;
- (void)linkmicDidStart;
- (void)sceneWillUnload;
- (void)setBgViewModel:;
- (void)guestListView:didTapAcceptLink:;
- (id)allSeatProviderViews;
- (id)anchorSeatView;
- (id)bgViewModel;
- (id)bigPartyItem;
- (id)componentContext;
- (BOOL)couldChangePosition;
- (void)didClickTopRightBtn;
- (id)emojiContainerForUserID:;
- (id)emojiContainerForUserID:isInteractiveEmoji:;
- (void)getTheme;
- (id)guestBattleUIAdaptor;
- (id)guestListView;
- (void)guestListView:didTapGuestInfoView:;
- (id)guestListViewModel;
- (void)handleUserListChange:;
- (BOOL)hasEmptySeat;
- (void)interactionDidUpdateAllSeats:;
- (void)interactionLinkerService:serverUserListDidChangeFrom:to:;
- (BOOL)isCustomizeAudioRoom;
- (BOOL)isLinking;
- (void)joinIconDidChangeWithURLs:;
- (id)linker;
- (void)linkmicDidLeaveChannel;
- (void)loadGuestListView;
- (void)p_clearPublicScreenPlaceHolder;
- (void)p_showPublicScreenPlaceHolder;
- (id)roomModel;
- (void)sceneControllerInit;
- (void)sceneWillLoad;
- (void)setBigPartyItem:;
- (void)setComponentContext:;
- (void)setGuestListView:;
- (void)setGuestListViewModel:;
- (void)setLinker:;
- (void)setTrackContext:;
- (void)soundAnimationDidChangeWithSpeakingImageList:;
- (void)soundAnimationDidChangeWithStartURLs:loopURLs:;
- (id)teamFightDelegate;
- (id)trackContext;
- (void)updateAnchorInfo:;
- (void)updateBackgroundViewWithCurrentLayout;
- (void)updateGuestList:;
- (void)updateGuestListWithAppData:;
- (void)updateRootPanelViewModel:;
- (void)updateWithTheme:;
- (void)willLoad;
- (void)willUnLoad;
- (id)placeholderView;
- (void)setDataSource:;
- (void)setPlaceholderView:;
- (void)setDelegate:;
- (void)setLayout:;
- (BOOL)isAnchor;
- (id)manager;
- (id)layout;
- (void)setManager:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (id)bgView;
- (void)setBgView:;
- (id)room;
- (void)setRoom:;
- (id)initWithDataSource:delegate:;
@end
