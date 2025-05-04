@interface AWEKnowledgeRichContentImpl.InspirationListViewController : AWEBaseListViewController
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (void)listDidReloadDataWithCollectionView:;
- (void)sectionControllerWillEnterWorkingRange:;
- (void)listDidPerformBatchUpdatesWithCollectionView:;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (long long)workingRangeSize;
- (void)dataSourceDidCreateSectionController:forSectionViewModel:;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (id)initWithCoder:;
- (void)setupCollectionView:;
@end
