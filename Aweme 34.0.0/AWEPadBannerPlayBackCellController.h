@interface AWEPadBannerPlayBackCellController : AWEPLVConfigurationTriptychBannerCellController
@property (nonatomic) AWEPadPolymericChannelBannerReplayCellView replayCellView;
@property (nonatomic) BOOL isShowing;
- (void)enableAutoCarousel;
- (void)viewDidDisplay;
- (void)configView:;
- (void)viewDidEndDisplay;
- (void)addCoverImage;
- (void)removeCoverImage;
- (id)replayCellView;
- (void)setReplayCellView:;
- (Class)viewClass;
- (BOOL)isShowing;
- (void)dealloc;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
- (void)setIsShowing:;
@end
