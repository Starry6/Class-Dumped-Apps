@interface AWEListenFeedProgressView : UIView
@property (nonatomic) UIView bgProgressView;
@property (nonatomic) AWEListenFeedProgressSlider progressSlider;
@property (nonatomic) UILabel currentTime;
@property (nonatomic) UILabel remainTime;
@property (nonatomic) <AWEListenFeedProgressViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initSubviews;
- (void)progressSliderValueChanged:;
- (id)formateDuration:;
- (void)updateCurrentTime:totalTime:;
- (id)bgProgressView;
- (id)remainTime;
- (void)sliderProgressSliderTouchBegan:;
- (void)sliderProgressSliderTouchEnded:;
- (void)setBgProgressView:;
- (void)setRemainTime:;
- (void)setCurrentTime:;
- (id)init;
- (id)delegate;
- (id)currentTime;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)initConstraints;
- (id)progressSlider;
- (void)setProgressSlider:;
@end
