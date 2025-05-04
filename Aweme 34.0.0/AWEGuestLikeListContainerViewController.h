@interface AWEGuestLikeListContainerViewController : AWEBaseListViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)duxGrid_viewDidChangeBreakPointFrom:toBreakPoint:;
- (void)customLayoutCollectionView:;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)bindViewModel;
- (void)bindEvent;
- (void)setupContext:;
- (id)init;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupCollectionView:;
+ (id)segmentedControlItem;
@end
