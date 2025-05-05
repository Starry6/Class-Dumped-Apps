@interface UIPrinterSetupPINViewController : UIViewController
@property (nonatomic) PKPrinter printer;
@property (nonatomic) UIPrinterSetupConnectingView connectingView;
@property (nonatomic) UIPrinterSetupPINView PINView;
@property (nonatomic) UIScrollView scrollView;
- (id)printer;
- (BOOL)shouldAutorotateToInterfaceOrientation:;
- (void)setScrollView:;
- (void)dealloc;
- (id)scrollView;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setPrinter:;
- (void)viewWillAppear:;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)connected:;
- (id)initWithPrinter:;
- (id)connectingView;
- (void)setConnectingView:;
- (void)connectToPrinter;
- (void)showSetup;
- (void)showFailure;
- (id)PINView;
- (void)setPINView:;
@end
