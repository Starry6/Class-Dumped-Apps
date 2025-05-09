@interface AWEIMFansGroupMasterStateViewController : UIViewController
@property (nonatomic) AWEIMFansGroupMasterStateViewModel viewModel;
@property (nonatomic) AWEIMFansGroupBanner topBanner;
@property (nonatomic) AWEIMFansGroupIntroduceViewController introduceVC;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIView creatFansGroupView;
@property (nonatomic) AWEButton completionButton;
@property (nonatomic) IESIMUILoadingView loadingView;
@property (nonatomic) NSIndexPath swipingStartIndexPath;
@property (nonatomic) UIPanGestureRecognizer swipingGesture;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL hideCreateButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__trackSaveData;
- (void)setIntroduceVC:;
- (BOOL)__isCellSwiping;
- (void)__updateUIFrame;
- (id)initWithoutCreateButton:source:;
- (void)__backBtnClicked;
- (void)__creatFansGroup;
- (double)__creatFansGroupViewH;
- (void)__didTapComplete;
- (void)__openCreatFansGroupPage;
- (void)__setupUI;
- (void)__setupVM;
- (void)__showAlert;
- (void)__trackEnterEvent;
- (void)__trackEnterchatEventWithCid:;
- (id)completionButton;
- (BOOL)configWithRouterParamDict:;
- (id)creatFansGroupView;
- (id)enterFrom;
- (BOOL)fansGroupMasterStateCell:enableSwipeGesture:;
- (void)fansGroupMasterStateCell:enterChatButtonClick:;
- (void)fansGroupMasterStateCell:groupStateButtonClick:;
- (void)fansGroupMasterStateCell:swipeGesture:;
- (BOOL)hideCreateButton;
- (BOOL)iesim_transition_shouldStartInteractiveTranstionToVC:;
- (id)iesimui_emptyPageConfigForState:;
- (void)iesimui_emptyPagePrimaryButtonTapped:;
- (id)introduceVC;
- (void)setCompletionButton:;
- (void)setCreatFansGroupView:;
- (void)setEnterFrom:;
- (void)setHideCreateButton:;
- (void)setSwipingGesture:;
- (void)setSwipingStartIndexPath:;
- (void)setTopBanner:;
- (id)swipingGesture;
- (id)swipingStartIndexPath;
- (id)topBanner;
- (id)collectionView:layout:referenceSizeForFooterInSection:;
- (BOOL)collectionView:canMoveItemAtIndexPath:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (void)collectionView:moveItemAtIndexPath:toIndexPath:;
- (id)init;
- (id)viewModel;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidDisappear:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setCollectionView:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)collectionView;
- (void)setViewModel:;
- (void)viewDidLayoutSubviews;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:;
- (void)hideLoadingView;
@end
