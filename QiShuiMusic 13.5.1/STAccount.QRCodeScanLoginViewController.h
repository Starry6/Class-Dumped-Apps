@interface STAccount.QRCodeScanLoginViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) BOOL prefersStatusBarHidden;
@property (nonatomic) Q supportedInterfaceOrientations;
@property (nonatomic) NSString etPageName;
- (id)etPageName;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (BOOL)prefersStatusBarHidden;
- (id)initWithCoder:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (void)captureOutput:didOutputMetadataObjects:fromConnection:;
@end
