@interface AWEPadSplitScreenAdapterImpl : NSObject
@property (nonatomic) NSMutableArray leftContainerArray;
@property (nonatomic) NSMapTable whoSetLeftContainerDic;
@property (nonatomic) NSMutableArray serviceStack;
@property (nonatomic) <AWEPadSplitViewService> currentService;
@property (nonatomic) UIViewController currentLeftContainerVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aAWEPadModuleAdapter;
- (id)currentService;
- (id)currentLeftContainerVC;
- (void)setCurrentLeftContainerVC:;
- (void)updateCurrentLeftContainerVC:whoSet:;
- (id)createContainerWithFrame:;
- (BOOL)enableSplitScreenWithReferString:;
- (void)addSplitWrapControllerWithViewControllerIfNeeded:;
- (void)openSplitWithContainer:secondaryController:type:enterMethod:animate:;
- (BOOL)checkSelfSplitViewControllerIsTopVC:;
- (BOOL)isCurrentSceneOpen;
- (BOOL)isCurrentSceneOpenSplitForLeftContainerVC:;
- (BOOL)isCurrentSceneShowing;
- (BOOL)isCurrentSceneShowingWithoutSplitViewService;
- (void)dismissCurrentLeftContainerVCWithAnimate:completion:;
- (long long)currentShowingLeftScene;
- (id)currentShowingLeftContainer;
- (double)rightContainerWidthWithItemID:;
- (BOOL)shouldBeginFeedPullRefreshGesture:;
- (BOOL)canHandleShouldBeginPullRefreshWithLeftContainerVC:;
- (BOOL)shouldBeginPullRefreshGesture:leftContainerVC:;
- (BOOL)canHandleShouldBeginPullRefreshWithLeftContainerVC:rightScene:;
- (BOOL)shouldBeginPullRefreshGesture:leftContainerVC:rightScene:;
- (void)bindSplitViewService:;
- (void)unbindSplitViewService:;
- (id)createSplitViewService;
- (id)createBizAdapterWithService:scene:;
- (long long)secondarySceneFromRightScene:;
- (BOOL)shouldReplaceToNewSplitScreen;
- (void)replaceToNewSplitScreen;
- (BOOL)canSplitInCurrentScreenStatus;
- (BOOL)canSplitInCurrentScreenStatusWithSize:;
- (BOOL)isDismissDragging;
- (BOOL)supportWinSpilt;
- (BOOL)supportGoodsDetailSpilt;
- (BOOL)supportFriendTabUseNewSplit;
- (BOOL)detailSupportNewSplit;
- (BOOL)supportPadSplitNewMix;
- (id)createSplitAnnieXViewControllerWithUrl:;
- (BOOL)isCurrentSceneShowSplitForRightScene:;
- (BOOL)isOpeningSplitScreenBussinessForRightScene:;
- (void)rightViewWillTransitionForBussinessVC:toSize:withTransitionCoordinator:;
- (void)rightViewDidDisappearForBussinessVC:;
- (void)rightViewWillAppearForBussinessVC:;
- (void)rightViewDidLayoutSubviewsForBussinessVC:;
- (double)rightContainerWidth;
- (BOOL)isShowingSplitScreenBussinessForLeftScene:;
- (id)leftContainerArray;
- (id)copySplitDetailForLeftScene:;
- (void)enterSplitDetail:animate:;
- (id)createSecondaryContent;
- (void)dismissRightContainerForLeftScene:extraParams:animate:completion:;
- (void)keyboardWillScrollTableView;
- (BOOL)isShowingSplitScreenBussinessForLeftContainerVC:;
- (BOOL)hasShownSplitScreen:;
- (void)dismissRightContainerForRightBusinessVC:animate:completion:;
- (BOOL)isShowingSplitScreenBussinessForRightScene:;
- (BOOL)isCurrentLandscape;
- (void)enterSplitScreenWithLeftContainerVC:rightBussinessVC:leftScene:rightScene:createVCHandler:animate:;
- (void)updateCurrentLeftScrollView:;
- (void)leftViewWillLayoutSubviewsForVc:;
- (void)updateLeftContentView:leftContainer:;
- (void)registerUIConfigWithLeftContainer:leftContentView:mainContainerVC:leftContainerScene:hasTabBar:sceneDelegate:;
- (void)keyboardDidScrollTableView;
- (void)scrollView:willDisplayModel:withScene:;
- (void)scrollView:didDisplayModel:withScene:;
- (void)scrollViewWillBeginDragging:withScene:;
- (void)scrollViewDidScroll:withScene:;
- (void)scrollViewDidEndDragging:willDecelerate:withScene:;
- (void)scrollViewDidEndDecelerating:withScene:;
- (void)scrollViewDidEndScrollingAnimation:withScene:;
- (id)modelForCurrentSplitScene:;
- (void)scrollViewContentOffsetDidChangedNoAnimation:withScene:;
- (void)updateLeftViewStatesWithScene:inUpdating:;
- (BOOL)isSplitAnimationRunning;
- (void)dismissRightContainerForLeftContainerVC:animate:completion:;
- (BOOL)isAppearForLeftContainerVC:;
- (id)detailForLeftScene:;
- (BOOL)hasRegisterUIConfigForLeftContainer:leftContainerScene:;
- (BOOL)isShowingSplitScreenBussinessForLeftScene:rightScene:;
- (BOOL)isShowingSplitScreenBussinessForLeftContainerVC:rightScene:;
- (BOOL)needUseContainerWidthForRightScene:;
- (id)rightBussinessVCForRightScene:;
- (id)whoSetLeftContainerDic;
- (void)removeLeftContainer:;
- (BOOL)gestureIsLocatedInSplitScreenContainer:leftScene:;
- (BOOL)gestureIsLocatedInSplitScreenContainer:leftScene:rightScene:;
- (id)getSplitUrlFromUrl:splitParams:blackQueryKeys:;
- (void)updateAdapterWithContainer:viewController:enterMethod:showType:;
- (id)serviceStack;
- (BOOL)needDismissOldFrameworkWithExtraParams:isServiceShowing:;
- (void)updateRegisterUIConfigIfNeedForLeftContainerScene:;
- (void)setLeftContainerArray:;
- (void)setWhoSetLeftContainerDic:;
- (void)setServiceStack:;
- (BOOL)enable;
- (void).cxx_destruct;
- (id)panGesture;
- (id)weakTarget;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)createPadSplitScreenAdapter;
+ (Class)weakTargetClass;
+ (BOOL)enable;
+ (id)sharedInstance;
@end
