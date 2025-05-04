@interface AWEVisitFrequentUserVideoListIndicatorSliderConfig : NSObject
@property (nonatomic) double sliderWidth;
@property (nonatomic) UIColor sliderBackgroundColor;
@property (nonatomic) UIColor sliderSelectedColor;
@property (nonatomic) double sliderBorderWidth;
@property (nonatomic) UIColor sliderBorderColor;
- (void)setSliderBackgroundColor:;
- (void)setSliderSelectedColor:;
- (void)setSliderBorderWidth:;
- (void)setSliderBorderColor:;
- (id)sliderBackgroundColor;
- (id)sliderSelectedColor;
- (double)sliderBorderWidth;
- (id)sliderBorderColor;
- (void).cxx_destruct;
- (void)setSliderWidth:;
- (double)sliderWidth;
+ (id)defaultConfig;
@end
