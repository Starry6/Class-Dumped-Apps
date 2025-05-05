@interface SUIKSearchResultsCollectionViewController : UICollectionViewController
@property (nonatomic) UICollectionViewDiffableDataSource diffableDataSource;
@property (nonatomic) _SUIKSearchResultsUpdateOperation updateOperation;
@property (nonatomic) NSObject<SUIKSearchResultsCollectionViewControllerDelegate> delegate;
- (void)searchQueryFoundItems:;
- (id)init;
- (id)diffableDataSource;
- (void)setDiffableDataSource:;
- (void)selectPreviousSearchResult;
- (double)iconWidth;
- (id)updateOperation;
- (void)setDelegate:;
- (void)showSelectedSearchResult;
- (void)scrollViewDidScroll:;
- (void)_selectAndScrollToIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setUpdateOperation:;
- (id)delegate;
- (unsigned long long)totalSearchResults;
- (void).cxx_destruct;
- (void)selectNextSearchResult;
- (void)searchQueryStarted;
- (void)searchQueryCompleted;
- (void)setResults:;
- (void)viewDidLoad;
@end
