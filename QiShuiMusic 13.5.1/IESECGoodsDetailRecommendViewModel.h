@interface IESECGoodsDetailRecommendViewModel : IESECGoodsDetailPageBaseViewModel
- (void)listAdapter:didEndDisplayingSectionController:cell:atIndex:;
- (void)listAdapter:willDisplaySectionController:cell:atIndex:;
- (void)setupViewModel;
- (void)trackLynxCardShow:index:;
- (void)trackRecommendLiveShow:index:;
- (void)trackRecommendLiveShowOver:index:;
- (void)trackRecommendProductShow:index:cell:;
- (void)trackRecommendProductShowOver:index:;
@end
