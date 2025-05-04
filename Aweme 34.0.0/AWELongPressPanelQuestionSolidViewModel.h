@interface AWELongPressPanelQuestionSolidViewModel : AWELongPressPanelBaseViewModel
- (BOOL)needShow;
- (void)configVM;
- (void)p_didSelectLongPressReasonForSeeingAds;
+ (BOOL)shouldShowReasonForSeeingAdsWithAwemeModel:;
+ (id)longPressPanelViewModel;
@end
