@interface TasteBuild.STTBGenreCollectionViewController : _TtGC15BNCommonAdapter21BNFrameViewControllerC10TasteBuild28STTBGenreCollectionFrameView_
@property (nonatomic) _TtC15BNCommonAdapter17BNRouteBasicParam param;
@property (nonatomic) NSString customSceneName;
@property (nonatomic) NSString etPageName;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didDeselectItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (BOOL)collectionView:shouldSelectItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)customSceneName;
- (id)etPageName;
- (id)initWithCoder:;
- (id)param;
- (void)setParam:;
- (void).cxx_destruct;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
