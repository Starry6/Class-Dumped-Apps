@interface AWEInterestDiscoverDetailViewController : UIViewController
@property (nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> detailVC;
@property (nonatomic) AWEAwemeModel firstModel;
@property (nonatomic) AWEListDataController dataController;
@property (nonatomic) NSString interestId;
@property (nonatomic) NSString interestName;
@property (nonatomic) AWEInterestDiscoverContext context;
@property (nonatomic) DUXContentSheet panelSheet;
@property (nonatomic) BOOL hasFirstAppeared;
@property (nonatomic) BOOL needShowPanelVCWhenAppear;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)configWithRouterParamDict:;
- (void)detailTableViewController:willDisplayCell:forRowAtIndexPath:model:;
- (void)sheetWillDismiss:;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:gestureRecognizer:;
- (void)transition_didStartTransitionWithContext:;
- (BOOL)transition_gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)transition_destinatedViewControllerForSlideDirection:gestureRecognizer:;
- (BOOL)transition_enableCustomActionForSlideDirection:gestureRecognizer:;
- (void)transition_performCustomActionForSlideDirection:gestureRecognizer:;
- (void)transition_didCancelPercentDrivenTransitionWithContext:;
- (void)setDataController:;
- (unsigned long long)currentVisibleCellIndex;
- (id)interestName;
- (void)setInterestName:;
- (id)detailVC;
- (void)setDetailVC:;
- (double)getStartSeekTime:;
- (void)adaptPlaybackRateForDetailCell:;
- (void)recordForSpeedInheritedIfNeedsWithSpeed:model:;
- (id)initWithAwemeModel:referString:logExtraDict:;
- (id)interestIDString;
- (id)interestNameString;
- (void)setHasFirstAppeared:;
- (void)setNeedShowPanelVCWhenAppear:;
- (void)interestDiscoverPageBottomBarShowPanelClick;
- (void)setInterestId:;
- (void)setFirstModel:;
- (id)interestId;
- (id)firstModel;
- (BOOL)needShowPanelVCWhenAppear;
- (void)showPanelVC;
- (void)setPanelSheet:;
- (BOOL)hasFirstAppeared;
- (id)currentPlayingAwemeModel;
- (id)panelSheet;
- (void)interestDiscoverPanelListDidSelectAtIndex:aweme:;
- (void)shouldDismissPanelVC;
- (void)viewWillDisappear:;
- (id)init;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void)setContext:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)context;
- (void)setupUI;
- (id)dataController;
@end
