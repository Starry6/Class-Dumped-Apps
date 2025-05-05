@interface DOCExportModeViewController : UIDocumentBrowserViewController
@property (nonatomic) DOCTargetSelectionBrowserViewController moveVC;
@property (nonatomic) NSURL directoryURLToReveal;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (void)setDirectoryURLToReveal:;
- (void)targetSelectionControllerWasCancelled:;
- (void)targetSelectionController:didExportToURLs:;
- (id)directoryURLToReveal;
- (id)moveVC;
- (void)setMoveVC:;
@end
