@interface AWEPadPolymericChannelSeriesHistoryCellController : AWEPadPolymericChannelHistoryCellBaseController
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
- (id)diffIdentifier;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (double)watchTimeStamp;
- (id)seriesCommonTrackParams;
- (Class)viewClass;
- (void)didSelectItemAtIndex:;
@end
