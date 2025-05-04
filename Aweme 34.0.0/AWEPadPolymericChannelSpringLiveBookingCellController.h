@interface AWEPadPolymericChannelSpringLiveBookingCellController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPadPolymericLiveBookingViewModel viewModel;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (id)diffIdentifier;
- (long long)columnNumWithCollectionView:;
- (void)trackCardShow;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (id)viewSizeWithIndex:collectionView:;
- (Class)viewClass;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
@end
