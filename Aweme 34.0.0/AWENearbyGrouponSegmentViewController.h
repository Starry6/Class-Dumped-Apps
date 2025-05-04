@interface AWENearbyGrouponSegmentViewController : UIViewController
@property (nonatomic) AWENearbyPageContext pageContext;
@property (nonatomic) AWENearbyGrouponSegmentViewModel viewModel;
@property (nonatomic) AWENearbyGrouponSegmentView segmentView;
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
