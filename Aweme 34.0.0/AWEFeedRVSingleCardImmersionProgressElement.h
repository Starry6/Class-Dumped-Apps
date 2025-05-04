@interface AWEFeedRVSingleCardImmersionProgressElement : AWEFeedRVSingleCardBaseElement
@property (nonatomic) BOOL isProgressSliderChanging;
@property (nonatomic) double percentage;
@property (nonatomic) UIView minimumTrackView;
@property (nonatomic) UIView maximumTrackView;
- (void)initializeElement;
- (double)trackHeight;
- (void)bindEvent;
- (void)unSelected;
- (id)minimumTrackView;
- (id)maximumTrackView;
- (void)setMaximumTrackView:;
- (void)setMinimumTrackView:;
- (BOOL)isProgressSliderChanging;
- (void)setIsProgressSliderChanging:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (double)percentage;
- (void)setPercentage:;
@end
