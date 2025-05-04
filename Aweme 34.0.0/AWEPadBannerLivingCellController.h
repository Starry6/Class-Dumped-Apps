@interface AWEPadBannerLivingCellController : AWEPLVConfigurationTriptychBannerCellController
@property (nonatomic) AWEPadPolymericChannelBannerLiveCellView liveCellView;
@property (nonatomic) BOOL isShowing;
- (void)enableAutoCarousel;
- (void)viewDidDisplay;
- (void)configView:;
- (id)liveCellView;
- (void)viewDidEndDisplay;
- (void)setLiveCellView:;
- (void)addCoverImage;
- (void)removeCoverImage;
- (Class)viewClass;
- (BOOL)isShowing;
- (void)dealloc;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
- (void)setIsShowing:;
@end
