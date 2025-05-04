@interface AWEGuestFollowListContainerViewController : AWEBaseListViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (void)customLayoutCollectionView:;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)bindViewModel;
- (BOOL)prefersStatusBarHidden;
- (id)init;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)setupUI;
- (void)setupCollectionView:;
+ (id)segmentedControlItem;
@end
