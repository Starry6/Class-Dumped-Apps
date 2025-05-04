@interface AWEFeedRVSingleCardActivationProgressElement : AWEFeedRVSingleCardBaseElement
@property (nonatomic) BOOL isProgressSliderChanging;
@property (nonatomic) UISlider progressSlider;
@property (nonatomic) UIImage defaultThumbImage;
@property (nonatomic) UIImage minimumImage;
@property (nonatomic) UIImage maximumImage;
- (void)initializeElement;
- (void)bindEvent;
- (id)defaultThumbImage;
- (void)setDefaultThumbImage:;
- (void)unSelected;
- (BOOL)isProgressSliderChanging;
- (void)updateProgressWithPercentage:;
- (void)setIsProgressSliderChanging:;
- (id)minimumImage;
- (id)maximumImage;
- (void)setMinimumImage:;
- (void)setMaximumImage:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (id)progressSlider;
- (void)setProgressSlider:;
@end
