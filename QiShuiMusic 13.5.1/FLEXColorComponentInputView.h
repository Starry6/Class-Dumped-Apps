@interface FLEXColorComponentInputView : UIView
@property (nonatomic) UISlider slider;
@property (nonatomic) UILabel valueLabel;
@property (nonatomic) <FLEXColorComponentInputViewDelegate> delegate;
- (id)initWithFrame:;
- (void)setBackgroundColor:;
- (void)layoutSubviews;
- (void)sliderChanged:;
- (void)updateValueLabel;
- (id)sizeThatFits:;
- (id)slider;
- (void)setSlider:;
- (id)valueLabel;
- (void)setValueLabel:;
- (id)delegate;
- (void)setDelegate:;
- (void).cxx_destruct;
@end
