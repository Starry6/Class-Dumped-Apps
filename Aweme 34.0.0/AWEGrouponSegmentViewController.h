@interface AWEGrouponSegmentViewController : UIViewController
@property (nonatomic) AWEGrouponPageContext pageContext;
@property (nonatomic) AWEGrouponSegmentViewModel viewModel;
@property (nonatomic) AWEGrouponSegmentView segmentView;
- (void)setupBinding;
- (id)initWithPageContext:;
- (id)segmentView;
- (void)setSegmentView:;
- (id)findTabViewWithTabID:;
- (long long)findTabIndexWithTabID:;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setPageContext:;
- (id)pageContext;
@end
