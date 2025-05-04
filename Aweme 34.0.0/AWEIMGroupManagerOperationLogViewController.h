@interface AWEIMGroupManagerOperationLogViewController : UIViewController
- (BOOL)configWithRouterParamDict:;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)aweui_emptyPageEdgeInsets;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)leave;
@end
