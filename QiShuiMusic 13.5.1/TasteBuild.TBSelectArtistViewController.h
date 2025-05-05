@interface TasteBuild.TBSelectArtistViewController : _TtGC15BNCommonAdapter21BNFrameViewControllerC10TasteBuild18TBSelectArtistView_
@property (nonatomic) NSString etSceneName;
@property (nonatomic) NSString etPageName;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didDeselectItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)scrollViewDidScroll:;
- (id)etPageName;
- (id)etSceneName;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
