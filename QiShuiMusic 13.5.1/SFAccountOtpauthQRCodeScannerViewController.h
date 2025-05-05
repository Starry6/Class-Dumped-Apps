@interface SFAccountOtpauthQRCodeScannerViewController : UIViewController
@property (nonatomic) <SFAccountOtpauthQRCodeScannerViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (void)_dismiss:;
- (void)viewWillDisappear:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)captureOutput:didOutputMetadataObjects:fromConnection:;
- (void)_configureCaptureSession;
@end
