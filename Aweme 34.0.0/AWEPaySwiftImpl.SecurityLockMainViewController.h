@interface AWEPaySwiftImpl.SecurityLockMainViewController : UIViewController
@property (nonatomic) NSString btm_pageIdentifier;
@property (nonatomic) BOOL btm_autoManaged;
- (void)actionSheet:didClickButtonAtIndex:;
- (void)transition_didPopDoneTransitionWithContext:;
- (BOOL)btm_autoManaged;
- (void)setBtm_autoManaged:;
- (id)btm_pageIdentifier;
- (void)setBtm_pageIdentifier:;
- (void)dux_backAction;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithCoder:;
@end
