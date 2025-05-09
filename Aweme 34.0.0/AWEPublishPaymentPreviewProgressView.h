@interface AWEPublishPaymentPreviewProgressView : UIView
@property (nonatomic) AWEPaymentPreviewSlider progressSlider;
@property (nonatomic) UIView gestureView;
@property (nonatomic) UIView progressDotView;
@property (nonatomic) double maxRatio;
@property (nonatomic) BOOL isNormalStatus;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) <AAWEPublishPaymentPreviewProgressViewDelegate> delegate;
- (void)progressSliderValueChanged:;
- (BOOL)isNormalStatus;
- (void)setIsNormalStatus:;
- (void)setIsSliding:;
- (BOOL)isSliding;
- (void)updateProgressSliderToStrong;
- (void)updateProgressSliderToNormal;
- (void)sliderProgressSliderTouchBegan:;
- (void)sliderProgressSliderTouchEnded:;
- (void)updateMinimumTrackImage;
- (void)updateSliderValueWithGesture:;
- (void)updateCurrentTime:totalTime:animated:;
- (void)updateDotViewRatio:;
- (id)progressDotView;
- (void)setProgressDotView:;
- (id)init;
- (id)delegate;
- (BOOL)pointInside:withEvent:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)handleGesture:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setupUI;
- (double)maxRatio;
- (void)setMaxRatio:;
- (id)progressSlider;
- (void)setProgressSlider:;
- (void)setGestureView:;
- (id)gestureView;
@end
