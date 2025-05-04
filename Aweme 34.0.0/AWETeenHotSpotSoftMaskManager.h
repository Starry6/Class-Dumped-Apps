@interface AWETeenHotSpotSoftMaskManager : NSObject
@property (nonatomic) AWETeenBezierCurve2DCaculator bezierCurveCaculator;
- (id)bezierCurveCaculator;
- (void)setBezierCurveCaculator:;
- (void)p_addViewCornerAndTransform:tranlationX:tranlationY:zoomScale:cornerRadius:;
- (void)triggerAnimationWithFormerView:latterView:percentage:height:;
- (BOOL)viewDidReset:;
- (void).cxx_destruct;
- (void)resetView:;
@end
