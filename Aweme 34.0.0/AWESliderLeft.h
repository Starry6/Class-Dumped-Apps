@interface AWESliderLeft : UIView
@property (nonatomic) UIImageView sliderImageView;
@property (nonatomic) UIView verticalLine;
@property (nonatomic) double visibleWidth;
@property (nonatomic) BOOL lockThumb;
@property (nonatomic) BOOL useEnhancedStyle;
- (id)verticalLine;
- (void)setVerticalLine:;
- (BOOL)useEnhancedStyle;
- (id)sliderImageView;
- (BOOL)lockThumb;
- (void)setLockThumb:;
- (void)setUseEnhancedStyle:;
- (void)setSliderImageView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (double)visibleWidth;
@end
