@interface AWEIMListTabWrapperViewController : UIViewController
@property (nonatomic) q type;
@property (nonatomic) <AWEIMListTabWrapperAction> listAction;
@property (nonatomic) UIViewController listChildViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setListChildViewController:;
- (id)skeletonScrollView;
- (id)listChildViewController;
- (void)loadChildViewController;
- (id)listAction;
- (void)setListAction:;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (long long)type;
- (void)viewDidDisappear:;
- (void)setType:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)initWithType:context:;
@end
