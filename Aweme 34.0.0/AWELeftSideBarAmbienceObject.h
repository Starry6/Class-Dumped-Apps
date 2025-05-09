@interface AWELeftSideBarAmbienceObject : NSObject
@property (nonatomic) BOOL entranceHasAdd;
@property (nonatomic) BOOL entranceAdded;
@property (nonatomic) BOOL hostAppear;
@property (nonatomic) NSObject<AWELeftSideBarTransitionObjectProtocol> transitionObject;
@property (nonatomic) double transitionBlockOpenTimestamp;
@property (nonatomic) AWELeftSideBarAmbienceManager ambienceManager;
@property (nonatomic) AWELeftSideBarHostParams hostParams;
@property (nonatomic) <AWELeftSideBarEntranceViewModelProtocol> entranceViewModel;
@property (nonatomic) UIView<AWELeftSideBarEntranceViewProtocol> entranceView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasLeftSideBarEntrance;
- (long long)openType;
- (id)entranceView;
- (void)setEntranceView:;
- (id)entranceViewModel;
- (void)setEntranceViewModel:;
- (BOOL)awe_slidingScrollViewShouldScrollWithPan:;
- (void)dispatch_sideBarHostViewWillAppear;
- (void)dispatch_sideBarHostViewDidAppear;
- (void)dispatch_sideBarHostViewDidDisappear;
- (void)dispatch_sideBarHostViewWillDisappear;
- (void)dispatch_sideBarEntranceViewHidden:;
- (void)dispatch_sideBarEntranceViewAlpha:;
- (void)dispatch_sideBarEntranceViewAdd;
- (long long)sideBarStatus;
- (id)ambienceManager;
- (void)showLeftSideBarBussinessEntranceRedDot;
- (void)hideLeftSideBarBussinessEntranceRedDot;
- (void)showLeftSideBarBussinessEntranceRedDotWithCount:;
- (void)hideLeftSideBarBussinessEntranceCountRedDot;
- (BOOL)closeSideBarWithParams:completion:;
- (void)setHostParams:;
- (id)hostParams;
- (id)getLeftSideBarOpenOperateMethodTrackName;
- (BOOL)openSideBarWithParams:completion:;
- (long long)leftSideBarStatus;
- (id)getLeftSideBarViewController;
- (double)sidebarTransition_slideArea;
- (BOOL)sidebarTransition_canSlideOpen;
- (unsigned long long)sidebarTransition_destinatedType;
- (id)sidebarTransition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (id)initWithAmbienceManager:withEntranceViewModel:withHostParams:;
- (void)updateWithEntranceViewModel:withHostParams:;
- (BOOL)canOpenLeftSideBar;
- (long long)leftSideBarBusinessEntranceRedDotStyle;
- (long long)currentLeftSideBarBussinessEntranceRedDotCount;
- (BOOL)hasAddLeftSideBarEntrance;
- (BOOL)canShowAmbienceEntranceBadge;
- (void)updateSideBarTabBarSnapshotIfNeed;
- (BOOL)canShowAmbienceEntranceLottie;
- (BOOL)canShowAmbienceEntrancePopView;
- (BOOL)canShowAmbienceEntranceCaption;
- (BOOL)canShowAmbienceEntranceInteractiveAnimation;
- (void)setAmbienceManager:;
- (void)p_handleTransitionNotification:;
- (BOOL)entranceAdded;
- (unsigned long long)p_openSideBarErrorType;
- (BOOL)hostAppear;
- (id)transitionObject;
- (void)setEntranceAdded:;
- (BOOL)entranceHasAdd;
- (void)setEntranceHasAdd:;
- (void)setHostAppear:;
- (unsigned long long)p_presentSideBarErrorType;
- (BOOL)p_shouldTransitionBlockOpen;
- (double)transitionBlockOpenTimestamp;
- (void)setTransitionBlockOpenTimestamp:;
- (void)leftSideBarEntranceViewClick:;
- (void)leftSideBarEntranceViewTouchesBegan:;
- (void)leftSideBarEntranceViewTapFailed:;
- (void)setTransitionObject:;
- (void)dealloc;
- (void).cxx_destruct;
@end
