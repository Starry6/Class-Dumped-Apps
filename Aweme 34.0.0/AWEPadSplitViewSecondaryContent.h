@interface AWEPadSplitViewSecondaryContent : UIViewController
@property (nonatomic) q splitViewScene;
@property (nonatomic) UIViewController content;
@property (nonatomic) BOOL displayNavigationBar;
@property (nonatomic) BOOL isPadSplitting;
@property (nonatomic) AWEPadSplitPageContext splitViewContext;
@property (nonatomic) <AWEPadSplitViewService> splitService;
@property (nonatomic) <AWEPadSplitViewBizAdapter> splitViewAdapter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIsPadSplitting:;
- (BOOL)isPadSplitting;
- (void)setSplitViewScene:;
- (void)setDisplayNavigationBar:;
- (id)splitService;
- (long long)splitViewScene;
- (id)splitViewContext;
- (void)setSplitViewContext:;
- (void)setSplitService:;
- (id)splitViewAdapter;
- (void)setSplitViewAdapter:;
- (BOOL)displayNavigationBar;
- (id)init;
- (id)content;
- (void)viewDidLoad;
- (void)setContent:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
@end
