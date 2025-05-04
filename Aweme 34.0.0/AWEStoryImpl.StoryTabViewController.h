@interface AWEStoryImpl.StoryTabViewController : AWEStoryKit.StoryKitViewController
- (id)zoomTransitionStartViewForOffset:;
- (void)customLayoutCollectionView:;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (id)collectionView:layout:referenceSizeForPageHeaderInSection:;
- (id)collectionView:layout:sizeForSectionLeftTitleInSection:;
- (BOOL)shouldHidePageHeaderWithCollectionView:;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)setupCollectionView:;
@end
