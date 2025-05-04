@interface AWEPadSkyLightLiveCardCellController : AWEPadListReusableViewBaseController
- (id)commonParams;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (Class)viewClass;
- (void)didSelectItemAtIndex:;
@end
