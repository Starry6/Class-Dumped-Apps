@interface AWELongPressPanelSelfAdsViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
+ (BOOL)shouldShowSelfAdEntranceWithAwemeModel:;
+ (id)longPressPanelViewModel;
@end
