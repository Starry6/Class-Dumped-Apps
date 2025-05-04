@interface AWEBDSimPlayerBizScreenGaussianBlurConfig : BDSimPlayerBizScreenGaussianBlurConfig
- (BOOL)enableLandScapeGaussianBlurBackground;
- (BOOL)enableLandScapeSmartColorBackground;
- (BOOL)enableAllScreenAdaption;
- (BOOL)enableOcclusionOptVideoZoom;
- (double)allScreenAdaptationRetainVideoHeight;
- (double)allScreenDynamicGaussianBlurGradientLength;
- (double)allScreenDynamicGaussianBlurFilterStrength;
- (long long)allScreenDynamicGaussianBlurTexMaxLength;
- (long long)allScreenDynamicGaussianBlurFrameControlNum;
- (double)occlusionOptVideoZoomBlurGradientLength;
- (double)occlusionOptVideoZoomBlurFilterStrength;
- (long long)occlusionDynamicGaussianBlurTexMaxLength;
- (long long)occlusionDynamicGaussianBlurControlNum;
- (BOOL)enableDynamicGaussianBlurH266;
- (BOOL)enableDynamicGaussianBlurSoft;
- (BOOL)enableDynamicGaussianBlurHDR;
- (BOOL)enableOcclusionOptDynamicBlur;
- (BOOL)enableAllScreenAdaptionDynamicBlur;
- (BOOL)allScreenCropOptimizeStyleWithModelIsStatic:;
- (BOOL)allScreenCropOptimizeStyleWithModelIsDymamic:;
- (BOOL)videoZoomTypeWithModelIsStatic:;
- (BOOL)videoZoomTypeWithModelIsDynamic:;
- (id)allScreenAdaptionVideoFirstFrameView:;
- (id)blurViewWithPoi:blurStartRatio:;
+ (id)sharedInstance;
@end
