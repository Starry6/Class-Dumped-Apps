@interface AWEShellViewController : UIViewController
@property (nonatomic) AWEPageContext context;
@property (nonatomic) AWEShellControllerManager controllerManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)controllerManager;
- (id)createControllerManager;
- (void)loadControllerManager;
- (void)setupInit;
- (void)setControllerManager:;
- (void)viewWillDisappear:;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (id)createContext;
- (void)viewDidDisappear:;
- (id)initWithNibName:bundle:;
- (void)setContext:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)context;
- (id)initWithCoder:;
@end
