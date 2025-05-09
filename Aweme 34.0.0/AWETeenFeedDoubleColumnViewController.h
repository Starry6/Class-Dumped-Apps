@interface AWETeenFeedDoubleColumnViewController : AWEBaseListViewController
@property (nonatomic) BOOL withinShrinkBackToSingleColumnRegion;
@property (nonatomic) BOOL isDoubleColumnGuidePopoverShowing;
@property (nonatomic) AWETeenFeedRootViewController teenRootVC;
@property (nonatomic) AWEGradientView topGradientView;
@property (nonatomic) AWETeenAgeGuideManager ageGuideManager;
@property (nonatomic) q vcType;
@property (nonatomic) AWEListDataController dataController;
@property (nonatomic) <AWETeenHomepageRootViewControllerProtocol> rootVC;
@property (nonatomic) q backButtonState;
@property (nonatomic) BOOL hasShowSwitchModeButtonFirstAppearAnimation;
@property (nonatomic) AWETeenExtraParamModel extraParam;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWETeenFeedChannelControllerProxyProtocol> controllerProxy;
- (void)p_setupUI;
- (BOOL)canRefresh;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)aweui_emptyPageEdgeInsets;
- (id)zoomTransitionStartViewForOffset:;
- (void)zoomTransitionShrinkFinish;
- (BOOL)currentTabIsTop;
- (void)onAwemeDeleted:isDislike:;
- (void)awe_themeReload;
- (long long)vcType;
- (void)customLayoutCollectionView:;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)playIfActive;
- (void)setRootVC:;
- (id)rootVC;
- (id)extraParam;
- (void)refreshWithAnimated:completion:;
- (long long)collectionView:layout:columnCountForSection:;
- (double)collectionView:layout:minimumColumnSpacingForSectionAtIndex:;
- (void)p_bindViewModel;
- (id)controllerProxy;
- (void)setControllerProxy:;
- (double)awe_shrinkTranslationX;
- (double)awe_tabBarTopBoundY;
- (BOOL)withinShrinkBackToSingleColumnRegion;
- (void)setWithinShrinkBackToSingleColumnRegion:;
- (void)setBackButtonState:;
- (void)awe_cancelPreviousAnimationFinalSelectors;
- (double)awe_shrinkDuration;
- (long long)backButtonState;
- (void)loadMoreIfNeeded;
- (BOOL)bottomBarFillBackground;
- (unsigned long long)bottomTabThemeType;
- (void)triggerSearchAction:;
- (void)doubleColumnGuidePopoverWillShow;
- (void)doubleColumnGuidePopoverDidDisappear;
- (void)sectionControllerUpdateLayout;
- (BOOL)hasShowSwitchModeButtonFirstAppearAnimation;
- (void)setHasShowSwitchModeButtonFirstAppearAnimation:;
- (void)awe_addSwitchModeCapsuleButtonAppearAnimation;
- (void)awe_addSwitchModeCapsuleButtonIconAppearAnimation;
- (void)awe_addSwitchModeCapsuleButtonLabelAppearAnimation;
- (void)awe_realAppearInMiddleSwitchModeButtonView;
- (double)awe_switchModeCapsuleButtonWidth;
- (void)awe_realShrinkToRightSwitchModeButtonView;
- (void)awe_addSwitchModeCapsuleButtonViewShrinkAnimation;
- (void)awe_addSwitchModeRoundButtonViewShrinkAnimation;
- (void)awe_addSwitchModeCapsuleButtonViewExpandAnimation;
- (void)awe_addSwitchModeRoundButtonViewExpandAnimation;
- (void)awe_realPrepareAppearSwitchModeButtonView;
- (void)awe_switchModeButtonViewAppear;
- (void)awe_handleDoubleColumnGuidePopoverShowing;
- (void)awe_switchModeButtonViewShrinkToRight;
- (void)awe_switchModeButtonViewExpandToMiddle;
- (void)p_setupAgeGuideManager;
- (id)p_currentTopGradientViewColor;
- (BOOL)isDoubleColumnGuidePopoverShowing;
- (id)ageGuideManager;
- (void)p_trackDoubleColumnVCDuration;
- (void)p_handleDataState:;
- (void)capsuleBackToSingleColumn;
- (void)roundBackToSingleColumn;
- (void)setIsDoubleColumnGuidePopoverShowing:;
- (void)p_switchCapsuleAndButtonForScrollView:;
- (id)teenRootVC;
- (void)p_trackDoubleColumnInnerDuration;
- (void)trackHomepageTabChangeWithEnterFrom:enterMethod:;
- (unsigned long long)currentTopTabBarTheme;
- (BOOL)supportInterestChannel:;
- (BOOL)channelShouldGreyWhenRecommendModeOn;
- (void)setTeenRootVC:;
- (void)setAgeGuideManager:;
- (void)setScrollEnabled:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (void)viewWillDisappear:;
- (id)init;
- (void)dealloc;
- (BOOL)play;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (BOOL)scrollEnabled;
- (void)viewDidDisappear:;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)viewDidAppear:;
- (void)stop;
- (void)pause;
- (long long)currentIndex;
- (id)dataController;
- (void)setupCollectionView:;
- (id)topGradientView;
- (void)setTopGradientView:;
+ (Class)viewModelClass;
+ (Class)viewHolderClass;
@end
