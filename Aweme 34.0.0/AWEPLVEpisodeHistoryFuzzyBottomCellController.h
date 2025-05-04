@interface AWEPLVEpisodeHistoryFuzzyBottomCellController : AWEPadPolymericChannelHistoryCellBaseController
@property (nonatomic) AWEPLVEpisodeViewModel viewModel;
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (id)diffIdentifier;
- (long long)columnNumWithCollectionView:;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (id)viewSizeWithIndex:collectionView:;
- (double)watchTimeStamp;
- (Class)viewClass;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
@end
