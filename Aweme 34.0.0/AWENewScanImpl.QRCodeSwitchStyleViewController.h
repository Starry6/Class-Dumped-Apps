@interface AWENewScanImpl.QRCodeSwitchStyleViewController : UIViewController
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)aweui_emptyPageEdgeInsets;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)managerQRcode;
- (void)finishManagerQRcode;
- (void)pop;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
