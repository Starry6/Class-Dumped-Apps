@interface PGStashView : UIView
@property (nonatomic) double blurProgress;
@property (nonatomic) double stashedTabWidth;
- (void)setBlurProgress:;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (double)blurProgress;
- (void)layoutStashChevrons;
- (void)setChevronHidden:left:;
- (void)resetChevronState;
- (double)stashedTabWidth;
- (void)setStashedTabWidth:;
@end
