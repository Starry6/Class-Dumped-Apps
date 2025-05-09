@interface IESLiveSaaSAudienceECommerceInternalFragment : IESLiveSaaSECommerceFragment
@property (nonatomic) IESLiveSaaSECommerceAPI api;
@property (nonatomic) BOOL didEnter;
@property (nonatomic) BOOL isNoticeShown;
@property (nonatomic) q shopCartTimer;
@property (nonatomic) BOOL afterEnterShouldCallBack;
@property (nonatomic) <IESLiveSaaSAudienceECommerceActions> eCommerceActions;
@property (nonatomic) <IESLiveSaaSCarRouter> commerceCarRouter;
@property (nonatomic) <IESLiveSaaSTimorService> timorService;
@property (nonatomic) <IESLiveSaaSECommerceService> ecommerceService;
@property (nonatomic) <IESLiveSaaSChatGuideTransformService> chatGuideService;
@property (nonatomic) NSDictionary serviceObjDict;
@property (nonatomic) IESLiveSaaSECommerceDurationTrack durationTracker;
@property (nonatomic) <IESLivePerfSampler> perfSampler;
@property (nonatomic) BOOL isRutrunBack;
@property (nonatomic) UIView sweepGuideView;
@property (nonatomic) IESLiveSaaSToolbarTipView tipsView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)commentSucceed:;
- (void)hasViewForPosition:finishBlock:;
- (id)registerWidgets;
- (void)setPerfSampler:;
- (id)durationTracker;
- (id)totalGoodsCount;
- (BOOL)_isAudience;
- (void)addAEcommerceNoticeIfNeedWithMessage:;
- (void)addECPerfFeature;
- (void)addLiveCardWithParams:;
- (void)addSweepGuide;
- (BOOL)afterEnterShouldCallBack;
- (void)callbackCartShowed:;
- (void)callbackWhenEnterIsEcommerce:;
- (void)cartControl:didShowShopCart:;
- (void)cartControl:shopCartShowedOnEnter:;
- (void)cartControl:willShowShopCart:;
- (void)cartControlDidClickShopCart:;
- (void)cartControlDidHideShopCart:;
- (id)chatGuideService;
- (id)commerceCarRouter;
- (void)commerceIsShowed:;
- (id)commonTrackParams;
- (void)componentDidMount;
- (void)componentOrientationChanged:;
- (void)componentUnmount;
- (BOOL)containShopCartOnEnter;
- (void)coordinateShopCartTimer;
- (BOOL)curRoomCanCartDoAnimation;
- (id)currentToolbarIdentifiers;
- (void)didCloseLiveRoomWithDuration:;
- (BOOL)didEnter;
- (void)didReceivedFinishMessage;
- (void)didSetAttachingDIContext;
- (id)eCommerceActions;
- (void)ecommerceBarItemClick;
- (id)ecommerceService;
- (BOOL)enableAnimDegradeByLive;
- (void)endTrackProductViewDuration;
- (void)fixOldVersionEcomLiveParams:;
- (void)handleCartRelatedAfterEnter;
- (void)handleCouponAuthPopupOnEnterRoom:;
- (void)handleEnterLiveRoom;
- (void)handleService;
- (void)handleStopCouponAuthFlowOnCloseRoom;
- (BOOL)hasViewForPosition:;
- (id)initWithRoom:trackContext:componentContext:;
- (BOOL)isCardViewShowed;
- (BOOL)isCurrentLandscape;
- (BOOL)isNoticeShown;
- (BOOL)isRutrunBack;
- (BOOL)isShopCartInToolBar;
- (BOOL)isShopCartShowed;
- (BOOL)jumpInRoom;
- (id)liveThemeSkinImage;
- (void)onExpandGroupShow:;
- (void)onToolbar:sizeChanged:;
- (void)openCommodityListWithParams:;
- (void)openGoodsDetailWithParams:;
- (void)p_clickShopCartOpenListView;
- (void)p_showCommodityViewWithParams:;
- (void)parseWithParams:fromInside:completion:;
- (id)perfSampler;
- (void)quietAllowDisclaimer:;
- (void)removeECPerFeature;
- (void)removeEcommerceChatGuide:;
- (BOOL)roomContextEnableECommerce:;
- (BOOL)roomContextShopCartFlagExist:;
- (BOOL)roomContextShopCartFlagExistInRoom:;
- (BOOL)roomContextShopCartItemExist:;
- (BOOL)roomContextShopCartValidShowing:;
- (id)serviceObjDict;
- (void)setAfterEnterShouldCallBack:;
- (void)setChatGuideService:;
- (void)setCommerceCarRouter:;
- (void)setDidEnter:;
- (void)setDurationTracker:;
- (void)setECommerceActions:;
- (void)setEcommerceService:;
- (void)setIsNoticeShown:;
- (void)setIsRutrunBack:;
- (void)setServiceObjDict:;
- (id)setServiceWithProtocol:class:;
- (void)setShopCartTimer:;
- (void)setSweepGuideView:;
- (void)setTimorService:;
- (void)setTipsView:;
- (void)setupCardPreload;
- (void)setupContext:;
- (void)setupEComEntranceComponents;
- (void)setupMessage;
- (long long)shopCartTimer;
- (void)showBubbleGuideWithText:forView:atBottom:duration:didShow:;
- (void)showCommodityCardToFront;
- (void)showGuideForPosition:config:;
- (void)showToolbarBubbleGuideWithText:duration:didShow:;
- (void)startTimmingTrackProductViewDuration;
- (void)stopMessage;
- (id)sweepGuideView;
- (id)timorService;
- (id)tipsView;
- (void)toolbarComponentRemovedReason:extra:;
- (void)toolbarComponentUpdate:;
- (void)toolbarReceiveComponent:completion:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)messageReceived:;
- (void)appWillEnterForeground;
- (id)api;
- (void)setApi:;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (void)ieslivekit_register_schema;
@end
