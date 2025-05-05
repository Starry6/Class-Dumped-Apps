@interface IESECCommentNewSKUContentView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) IGListAdapter listAdapter;
@property (nonatomic) IESECSKUContentViewModel viewModel;
@property (nonatomic) <IESECCommentNewSKUContentViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setListAdapter:;
- (void)didSelectSKUItem;
- (id)emptyViewForListAdapter:;
- (id)listAdapter;
- (id)listAdapter:sectionControllerForObject:;
- (id)mainCollection;
- (id)objectsForListAdapter:;
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
