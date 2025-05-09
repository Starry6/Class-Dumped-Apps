@interface AWEIMBigFontStyleManager : NSObject
+ (double)im_scaleFactorOfBottomBar;
+ (unsigned long long)currentFontMode;
+ (void)im_scaleControllerViewWithView:wrappedInContainerVC:;
+ (double)im_scaleFactorOfChatVC;
+ (double)im_screenWidthOfChatVC;
+ (double)im_screenHeightOfChatVC;
+ (id)im_screenSizeOfChatVC;
+ (double)im_scaleFactorofMessageTab;
+ (double)im_screenWidthOfMessageTab;
+ (double)im_screenHeightMessageTab;
+ (id)im_screenSizeOfMessageTab;
+ (id)screenSizeWithTargetView:;
+ (double)im_fontScaleFactorWithScene:;
+ (BOOL)im_enableBigFontStyle;
+ (BOOL)im_enableBigFontStyleOfChatVC;
+ (BOOL)im_enableBigFontStyleOfMessageTab;
+ (BOOL)enableZoomViewModeWithScene:;
+ (BOOL)im_enableStockSceneAdaption;
+ (double)keepFloatValue:;
+ (double)scaleFloatValue:;
+ (BOOL)im_enableBigFontStyleCoreOpt;
+ (BOOL)im_enableBigFontStyleCore;
+ (double)im_scaleFactor;
+ (id)im_screenSizeWithScene:;
+ (double)im_viewScaleFactorOfMessageTab;
+ (BOOL)im_enableBigFontStyleOfBottomBar;
+ (BOOL)im_enableBigFontStyleOfEmojiPanel;
+ (unsigned long long)duxComponentEnlargeTypeWithIESIMType:;
@end
