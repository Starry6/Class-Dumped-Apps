@interface AWEPlayInteractionBulletPatchPOIElementViewModel : AWEPlayInteractionPersonElementViewModel
- (void)interactor_onBulletPatchPoiGuideTapped;
- (void)router_onBulletPatchPoiGuideTapped;
- (void)p_userDidTapBulletPatchPoiGuide:;
- (void)interactor_onBulletPatchPoiGuideCloseTapped;
- (void)router_onBulletPatchPoiGuideCloseTapped;
- (id)p_awemeAndUserRelatedKeyWithKey:;
- (id)p_userRelatedKeyWithKey:;
- (void)p_showPOILocationPicker;
- (void)userDidTapBulletPatchPoiGuide;
- (void)userDidTapCloseBulletPatchPoiGuide;
- (void)didShowBulletPatchPoiGuideView;
- (BOOL)canShowBulletPatchPoiGuideByFrequencyControl;
- (void)p_showNativeLocationPicker;
- (void)cleanUp;
- (void)setUp;
@end
