@interface AWEGameBaseCellController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEGameViewModel viewModel;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (void)viewDidDisplay;
- (void)configView:;
- (void)trackPadModuleEvent:;
- (void)trackGameEvent:;
- (id)initWithModel:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
@end
