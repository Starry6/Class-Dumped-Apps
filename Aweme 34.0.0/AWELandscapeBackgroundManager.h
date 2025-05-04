@interface AWELandscapeBackgroundManager : NSObject
- (id)playerBackgroundView:frame:;
- (id)getFirstRenderImageWithModel:;
- (id)smartBackgroundColorWithModel:;
- (id)getVisualEffectView;
- (id)gaussianBlurBackgroundViewWithModel:frame:;
- (id)smartColorBackgroundViewWithModel:frame:;
- (id)adVideoPlayerBackgroundView:frame:;
- (id)normalVideoPlayerBackgroundView:frame:;
+ (BOOL)isRealLandscapeVideo:;
+ (BOOL)enableGaussianBlurView:;
+ (BOOL)enableSmartColorView:;
+ (id)sharedManager;
@end
