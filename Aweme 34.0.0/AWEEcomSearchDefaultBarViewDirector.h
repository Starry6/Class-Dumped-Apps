@interface AWEEcomSearchDefaultBarViewDirector : AWEEcomSearchBarViewDirector
- (void)moveToPage:fromPage:;
- (void)initStat:;
- (void)updateThemeForChange:;
- (void)privacyStateChanged:;
- (void)updateShowMoreIconWithPage:;
- (void)updateBarViewBasedOnSettingsWithPage:;
- (void)updateSearchIcon:state:;
- (void)updateShowMoreIcon:;
- (void)updateBarViewInResultPage:;
- (void)refreshBarViewBaseOnSettings;
@end
