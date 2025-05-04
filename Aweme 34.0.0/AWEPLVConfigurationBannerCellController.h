@interface AWEPLVConfigurationBannerCellController : AWEPadListReusableViewBaseController
@property (nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> sectionViewModel;
@property (nonatomic) BOOL hasShow;
- (BOOL)hasShow;
- (void)setHasShow:;
- (void)viewDidDisplay;
- (void)configView:;
- (id)viewSizeWithIndex:collectionViewSize:contentSize:;
- (void)viewDidEndDisplay;
- (id)bannerCommonTrackParams;
- (void)configCardCellGradientView:;
- (void)trackGameEventIfNeeded:;
- (Class)viewClass;
- (void)didSelectItemAtIndex:;
@end
