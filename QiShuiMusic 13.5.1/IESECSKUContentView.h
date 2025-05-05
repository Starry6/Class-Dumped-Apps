@interface IESECSKUContentView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) IGListAdapter listAdapter;
@property (nonatomic) IESECSKUContentViewModel viewModel;
@property (nonatomic) <IESECSKUContentViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)openCouponPanel;
- (void)setListAdapter:;
- (void)clickTradeInItem:;
- (id)emptyViewForListAdapter:;
- (id)listAdapter;
- (id)listAdapter:sectionControllerForObject:;
- (id)mainCollection;
- (id)objectsForListAdapter:;
- (void)openPOIListWithURLString:;
- (id)viewModel;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (id)delegate;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setViewModel:;
- (void)reloadView;
@end
