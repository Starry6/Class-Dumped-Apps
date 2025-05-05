@interface UIPrinterSetupDisplayPINViewController : UIViewController
@property (nonatomic) PKPrinter printer;
- (id)printer;
- (BOOL)shouldAutorotateToInterfaceOrientation:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setPrinter:;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithPrinter:;
- (void)enterPIN;
- (void)showDisplayMessage:;
@end
