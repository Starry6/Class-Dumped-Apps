@interface AWEPadSplitViewMixBizAdapter : AWEPadSplitViewBizAdapter
@property (nonatomic) AWEPadMixVideoPanelGestureGuideView gestureGuideView;
@property (nonatomic) BOOL gestureGuideViewShowed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)gestureGuideView;
- (void)setGestureGuideView:;
- (void)showGestureGuideOnView:frame:;
- (void)dismissGestureGuide;
- (BOOL)canShowGestureGuideFrequencyControl;
- (void)addGestureGuideViewShowTimes;
- (void)panGesAction;
- (void)lottieViewPlayCompletion;
- (BOOL)enableVerticalSlideDismiss;
- (void)service:didShowViewController:source:;
- (void)service:willDismissViewController:source:;
- (void)service:didDismissViewController:source:;
- (BOOL)service:gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (void)splitViewDismissWithStayTime:duration:;
- (void)setGestureGuideViewShowed:;
- (BOOL)gestureGuideViewShowed;
- (void).cxx_destruct;
@end
