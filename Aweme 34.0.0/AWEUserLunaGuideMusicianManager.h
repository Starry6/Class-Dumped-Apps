@interface AWEUserLunaGuideMusicianManager : NSObject
+ (id)p_colorWithLightColor:darkColor:;
+ (id)p_imageWithLightImage:darkImage:;
+ (BOOL)shouldShowGuideLunaMusicianBtnWithContext:;
+ (void)didTapGuideLunaMusicianEntryWithContext:sceneType:;
+ (id)createGuideLunaButtonWithContext:;
+ (void)trackGuideLunaEntryShowWithContext:scene:;
+ (void)trackGuideLunaEntryShowFailIfNeedWithContext:scene:;
+ (void)checkAndRequestGuideLunaMusicianInfo:;
+ (id)p_btnInfo:;
+ (unsigned long long)p_guideLunaButtonStyle;
+ (id)p_createGuideLunaWhiteButtonWithTitle:;
+ (id)p_createGuideLunaBlackButtonWithTitle:;
+ (id)p_createGuideLunaMiniButton;
+ (double)p_buttonFontSize;
+ (void)p_trackClickGuideLunaEntryWithContext:sceneType:;
+ (void)p_trackPopViewDataErrorIfNeedWith:sceneType:;
@end
