@interface AWEIMMessageInteractiveUserListViewController : UIViewController
@property (nonatomic) AWEIMMessageInteractiveUserListHeaderView headerView;
@property (nonatomic) UIButton topDismissButton;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIViewController fromVC;
@property (nonatomic) UIView forbidNavGesView;
@property (nonatomic) AWEIMMessageInteractiveDataManager dataManager;
@property (nonatomic) BOOL isMultiType;
@property (nonatomic) Q interactivePanelType;
@property (nonatomic) NSMutableArray interactivePanelTypes;
@property (nonatomic) NSMutableArray titleArray;
@property (nonatomic) q initIndex;
@property (nonatomic) AWEIMConversationContext conversationContext;
@property (nonatomic) AWEIMMessage message;
@property (nonatomic) BOOL isDoubleLike;
@property (nonatomic) BOOL shouldShowState;
@property (nonatomic) NSString initialKey;
@property (nonatomic) @? didSelectUserWithPropertyItem;
@property (nonatomic) UIView baseView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFromVC:;
- (id)fromVC;
- (void)setDismissTapGesture:;
- (id)dismissTapGesture;
- (void)setDismissPanGesture:;
- (id)dismissPanGesture;
- (void)setInitIndex:;
- (long long)initIndex;
- (void)setLastDismissPanGestureLocation:;
- (id)lastDismissPanGestureLocation;
- (void)showOnView:initialLayoutBlock:targetLayoutBlock:animated:;
- (void)performDismissAnimated:;
- (void)_layoutBaseView:;
- (void)_addMaskToBaseView;
- (void)_layoutBaseViewSubViews;
- (void)ies_setupDismissGesture;
- (void)ies_handleDismissPanGesture:;
- (void)ies_handleDismissTapGesture:;
- (id)ies_conflictScrollView;
- (void)setIes_conflictScrollView:;
- (void)setInitialKey:;
- (void)setIsDoubleLike:;
- (void)setShouldShowState:;
- (void)setDidSelectUserWithPropertyItem:;
- (void)showOnViewController:animated:;
- (void)didSelectUserWithPropertyItem:;
- (void)onMessagePropertyItemFetchComplete;
- (id)titleArray;
- (BOOL)isMultiType;
- (void)setIsMultiType:;
- (void)setTitleArray:;
- (void)topDismissButtonTapped;
- (void)setTopDismissButton:;
- (void)emptyPanGes:;
- (id)forbidNavGesView;
- (id)topDismissButton;
- (id)_getTabNameWith:;
- (void)__trackPanelShowDataWithEnterFrom:enterMethod:tabName:;
- (id)didSelectUserWithPropertyItem;
- (unsigned long long)interactivePanelType;
- (id)initialKey;
- (id)interactivePanelTypes;
- (void)refreshHeaderTabView;
- (void)emptyTapGes:;
- (void)setInteractivePanelTypes:;
- (void)setInteractivePanelType:;
- (BOOL)shouldShowState;
- (BOOL)isDoubleLike;
- (void)setForbidNavGesView:;
- (void)viewWillDisappear:;
- (id)collectionView;
- (void)dismissAnimated:;
- (id)message;
- (id)dataManager;
- (void)setBaseView:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)setCollectionView:;
- (id)headerView;
- (void)setDataManager:;
- (void)scrollViewDidScroll:;
- (double)baseHeight;
- (void)scrollViewDidEndDecelerating:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)setMessage:;
- (id)baseView;
- (void)setHeaderView:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)conversationContext;
- (void)setConversationContext:;
@end
