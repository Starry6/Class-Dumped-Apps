@interface AWEScreenCastWebViewController : AWEWebViewController
@property (nonatomic) Q lastSupportOrientation;
- (unsigned long long)lastSupportOrientation;
- (void)setLastSupportOrientation:;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)dismissViewControllerAnimated:completion:;
- (void)viewWillAppear:;
- (void)goBack:;
@end
