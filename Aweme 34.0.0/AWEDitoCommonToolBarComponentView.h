@interface AWEDitoCommonToolBarComponentView : DitoComponentView
@property (nonatomic) AWEDitoCommonToolBarComponentViewModel viewModel;
@property (nonatomic) DUXNavigationBar duxNavigationBar;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) q actionIndex;
@property (nonatomic) NSMutableDictionary actionViewMap;
- (void)setLeftPadding:;
- (void)setRightPadding:;
- (id)duxNavigationBar;
- (void)setDuxNavigationBar:;
- (void)updateViewModel:;
- (id)actionViewMap;
- (void)addDuxAction:;
- (void)didTapDux:;
- (void)setActionViewMap:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)reset;
- (void)setActionIndex:;
- (long long)actionIndex;
- (double)leftPadding;
- (double)rightPadding;
@end
