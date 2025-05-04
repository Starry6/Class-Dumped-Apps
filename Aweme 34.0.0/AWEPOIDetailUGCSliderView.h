@interface AWEPOIDetailUGCSliderView : UIView
@property (nonatomic) q currentIndex;
@property (nonatomic) q totalCount;
@property (nonatomic) AWEStoryProgressContainerView indexSlider;
@property (nonatomic) AWEPOIVideoProgressSlider progressSlider;
@property (nonatomic) BOOL isSliding;
@property (nonatomic) <AWEPOIDetailUGCSliderDelegate> delegate;
- (void)progressSliderTouchEnded:;
- (void)setIsSliding:;
- (BOOL)isSliding;
- (void)showProgressSlider:;
- (void)updateProgressWithType:totalCount:duration:currentIndex:currentProcess:needAnimation:;
- (void)progressSlideChangeValue:;
- (id)initWithCurrentIndex:totalCount:;
- (id)indexSlider;
- (void)makeConstrains;
- (void)setIndexSlider:;
- (id)delegate;
- (void)setCurrentIndex:;
- (long long)totalCount;
- (void).cxx_destruct;
- (void)setDelegate:;
- (long long)currentIndex;
- (void)setupUI;
- (void)setTotalCount:;
- (id)progressSlider;
- (void)setProgressSlider:;
@end
