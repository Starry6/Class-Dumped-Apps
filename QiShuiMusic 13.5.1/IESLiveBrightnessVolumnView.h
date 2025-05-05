@interface IESLiveBrightnessVolumnView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIView sliderBackground;
@property (nonatomic) UIView sliderView;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
- (void)calculateValueAndLayout:;
- (void)setSliderBackground:;
- (id)sliderBackground;
- (void)updateIconImage:;
- (float)minimumValue;
- (void)setMaximumValue:;
- (void)layoutSubviews;
- (float)maximumValue;
- (void)setMinimumValue:;
- (void)setSliderView:;
- (void)tintColorDidChange;
- (id)sliderView;
- (id)initWithFrame:;
- (void)setValue:;
- (void)setup;
- (void).cxx_destruct;
- (float)value;
- (id)iconImageView;
- (void)setIconImageView:;
- (void)updateValue:;
@end
