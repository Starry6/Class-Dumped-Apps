@interface AWEMusicUseGuideStoreService : AWEMusicCommonGuideStoreService
- (BOOL)canShowBgGuide;
- (Class)guidePopupViewClass;
- (void)bgGuideDidShow;
- (id)bgGuideTutorialType;
@end
