@interface AWEIMInteractorsViewController : UIViewController
@property (nonatomic) NSArray interactors;
- (void)setInteractors:;
- (void)injectInteractors:;
- (id)interactorForClass:;
- (id)interactors;
- (void)dealloc;
- (void)viewDidDisappear:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)viewDidLoad;
@end
