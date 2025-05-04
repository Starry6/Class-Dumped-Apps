@interface AWEPadPolymericChannelEpisodeHistoryCellController : AWEPadPolymericChannelHistoryCellBaseController
@property (nonatomic) AWEPLVEpisodeViewModel viewModel;
- (id)diffIdentifier;
- (void)trackCardShow;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (double)watchTimeStamp;
- (Class)viewClass;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
@end
