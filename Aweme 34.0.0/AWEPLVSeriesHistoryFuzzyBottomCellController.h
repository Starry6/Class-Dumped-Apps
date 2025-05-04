@interface AWEPLVSeriesHistoryFuzzyBottomCellController : AWEPadPolymericChannelHistoryCellBaseController
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (id)diffIdentifier;
- (long long)columnNumWithCollectionView:;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (id)viewSizeWithIndex:collectionView:;
- (double)watchTimeStamp;
- (id)seriesCommonTrackParams;
- (Class)viewClass;
- (void)didSelectItemAtIndex:;
@end
