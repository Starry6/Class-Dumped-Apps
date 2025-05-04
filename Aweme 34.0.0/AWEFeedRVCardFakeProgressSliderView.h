@interface AWEFeedRVCardFakeProgressSliderView : UIView
@property (nonatomic) UIView progressSliderContainerView;
@property (nonatomic) UIView maximumTrackView;
@property (nonatomic) UIView minimumTrackView;
@property (nonatomic) UIView thumbView;
@property (nonatomic) double percentage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)progressSliderContainerView;
- (id)minimumTrackView;
- (id)maximumTrackView;
- (void)setProgressSliderContainerView:;
- (void)setMaximumTrackView:;
- (void)setMinimumTrackView:;
- (id)init;
- (id)thumbView;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (double)percentage;
- (void)setupUI;
- (void)setThumbView:;
- (void)show:completion:;
- (void)setPercentage:;
@end
