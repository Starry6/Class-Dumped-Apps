@interface AWEPaySwiftImpl.CCMEntryContainerViewController : UIViewController
- (BOOL)needHighLightScreenBrightness;
- (BOOL)hasActivateRetainGuide;
- (void)showActivateRetainGuide;
- (void)updateContainer:;
- (void)didUpdateDeviceCert;
- (void)didScreenshot;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (id)initWithNibName:bundle:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithCoder:;
+ (id)createContainer:context:delegate:;
@end
