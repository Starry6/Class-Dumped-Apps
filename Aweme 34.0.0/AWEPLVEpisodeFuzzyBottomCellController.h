@interface AWEPLVEpisodeFuzzyBottomCellController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPLVEpisodeViewModel viewModel;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (void)setSectionViewModel:;
- (id)diffIdentifier;
- (long long)columnNumWithCollectionView:;
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
