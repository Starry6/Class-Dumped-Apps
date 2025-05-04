@interface AWEPadPMCSeriesBannerCardCellController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPLVSeriesViewModel viewModel;
- (id)diffIdentifier;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (Class)viewClass;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
@end
