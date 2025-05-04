@interface AWEPadSplitRiflePopupViewController : UIViewController
@property (nonatomic) @? closeBlock;
@property (nonatomic) BOOL isPadSplitting;
@property (nonatomic) q splitViewScene;
@property (nonatomic) AWEPadSplitPageContext splitViewContext;
@property (nonatomic) <AWEPadSplitViewService> splitService;
@property (nonatomic) <AWEPadSplitViewBizAdapter> splitViewAdapter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCloseBlock:;
- (void)setIsPadSplitting:;
- (id)closeBlock;
- (BOOL)isPadSplitting;
- (id)splitService;
- (long long)splitViewScene;
- (id)splitViewContext;
- (void)setSplitViewContext:;
- (void)setSplitService:;
- (id)splitViewAdapter;
- (void)setSplitViewAdapter:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
