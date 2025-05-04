@interface AWEHotWordsRecommendViewController : UIViewController
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UICollectionViewFlowLayout flowLayout;
@property (nonatomic) NSMutableArray hotPointModels;
@property (nonatomic) AWEHotSpotInnerContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showOrHiddenCollectionView:;
- (void)refreshWithData:currentRecommendWord:;
- (void)trackTrendingTopicForEvent:searchModel:indexPath:withOtherParams:;
- (void)setHotPointModels:;
- (id)hotPointModels;
- (double)calculateContentWidth:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setContext:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)context;
- (id)flowLayout;
- (void)setFlowLayout:;
@end
