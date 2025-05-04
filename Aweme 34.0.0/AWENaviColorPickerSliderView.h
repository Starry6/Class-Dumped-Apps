@interface AWENaviColorPickerSliderView : UIView
@property (nonatomic) CAGradientLayer sliderBar;
@property (nonatomic) UIView sliderBlock;
@property (nonatomic) UIView sliderBlockBack;
@property (nonatomic) double currentRatio;
@property (nonatomic) @? onChange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateDarkColor:centerColor:lightColor:ratio:;
- (id)sliderBar;
- (double)currentRatio;
- (id)sliderBlockBack;
- (id)sliderBlock;
- (void)setCurrentRatio:;
- (void)setSliderBar:;
- (void)setSliderBlock:;
- (void)setSliderBlockBack:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onLongPress:;
- (void)setupViews;
- (id)onChange;
- (void)setOnChange:;
@end
