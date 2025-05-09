@interface IESLiveSaaSAudienceRankListFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSAudienceListStore store;
@property (nonatomic) <IESLiveGiftModule> giftModule;
@property (nonatomic) IESLiveSaaSAudienceListEnterBaseView audienceEnterView;
@property (nonatomic) UIButton mtAudienceEnterButton;
@property (nonatomic) <IESLiveSaaSInternalRouter> internalRouter;
@property (nonatomic) <HTSLiveSaaSAudienceListActions> actionCreator;
@property (nonatomic) BOOL shouldShowAudienceList;
@property (nonatomic) IESLiveSaaSOnlineWatchUserView onlineWatchUser;
@property (nonatomic) q orientation;
@property (nonatomic) RACScopedDisposable disposable;
@property (nonatomic) IESLiveSaaSLinkMicContributeListView linkMicContributeListView;
@property (nonatomic) <IESLiveSaaSURLSchemaHandler> schemaURLHandler;
@property (nonatomic) <IESLiveSaaSLayoutContainerProvider> containerProvider;
@property (nonatomic) <IESHYControllerProtocol> hybridContainer;
@property (nonatomic) <IESLivePerfSampler> perfSampler;
@property (nonatomic) double appearTime;
@property (nonatomic) BOOL needHideOnlineWatchUser;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)createEnterView;
- (void)setPerfSampler:;
- (void)updateAudienceEnterHiddenStatus;
- (void)updateBrandRoom;
- (void)updateEnterView;
- (id)hybridContainer;
- (id)onlineWatchUser;
- (void)refreshSeqUserListEnterWithMsg:;
- (void)showLoginPanel:;
- (void)tryAddEnterView;
- (id)actionCreator;
- (double)appearTime;
- (id)audienceEnterView;
- (void)audienceEnterViewInitWithAudienceCountIfNeeded;
- (void)componentDidMount;
- (void)componentOrientationChanged:;
- (void)componentWillUnmount;
- (void)didSetAttachingDIContext;
- (id)disposable;
- (void)douplusAddedNewOrder;
- (void)endShowDouPlusView;
- (void)enterDouplusPageView;
- (id)giftModule;
- (void)hideComponent;
- (id)internalRouter;
- (id)linkMicContributeListView;
- (void)makeAudienceEnterVisible:;
- (id)mtAudienceEnterButton;
- (BOOL)needHideOnlineWatchUser;
- (id)openHybridURL:fromInside:;
- (void)p_showLynxAudienceListWithRankType:;
- (id)perfSampler;
- (void)refreshDouPlusUserCount:;
- (void)refreshOrientationLandscapeUserCount:;
- (void)refreshOrientationPortraitUserCount:;
- (void)refreshRoomContributor:;
- (void)refreshSeqUserListEnterWithData:;
- (void)refreshTotalUser:;
- (void)refreshUserCount:;
- (void)refreshVipSeatDataWithModel:;
- (id)schemaURLHandler;
- (void)setActionCreator:;
- (void)setAppearTime:;
- (void)setAudienceEnterView:;
- (void)setContainerProvider:;
- (void)setDisposable:;
- (void)setGiftModule:;
- (void)setHybridContainer:;
- (void)setInternalRouter:;
- (void)setLinkMicContributeListView:;
- (void)setMtAudienceEnterButton:;
- (void)setNeedHideOnlineWatchUser:;
- (void)setOnlineWatchUser:;
- (void)setSchemaURLHandler:;
- (void)setShouldShowAudienceList:;
- (BOOL)shouldShowAudienceEnter;
- (BOOL)shouldShowAudienceList;
- (void)showAudienceRankList;
- (void)showComponent;
- (void)showGiftViewWithExtraParams:;
- (void)showLinkMicGuestRankListWithUser:;
- (void)showLynxLinkMicGuestRankListWithUser:extraParams:;
- (void)startShowDouPlusView;
- (void)tryAddOnlineWatchUser;
- (void)updateLiveRoom;
- (void)updateVipInfo;
- (void)showToast:;
- (id)init;
- (void)setStore:;
- (long long)orientation;
- (id)containerProvider;
- (void).cxx_destruct;
- (id)store;
- (void)setOrientation:;
- (void)messageReceived:;
- (void)setUpViews;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (long long)preferredLoadPhase;
@end
