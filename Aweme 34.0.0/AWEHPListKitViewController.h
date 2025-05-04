@interface AWEHPListKitViewController : UIViewController
@property (nonatomic) AWEHPListKitControllerManager controllerManager;
@property (nonatomic) IGListAdapter listAdapter;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)controllerManager;
- (id)objectsForListAdapter:;
- (id)listAdapter:sectionControllerForObject:;
- (id)emptyViewForListAdapter:;
- (void)setControllerManager:;
- (id)listAdapter;
- (void)setListAdapter:;
- (double)calculateHPListKitViewHeight;
- (id)collectionView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)initWithManager:;
@end
