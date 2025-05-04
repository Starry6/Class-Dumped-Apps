@interface AWEGradientBorderView : UIView
@property (nonatomic) double borderWidth;
@property (nonatomic) NSArray colors;
- (void)setBorderWidth:;
- (void)setColors:;
- (id)init;
- (double)borderWidth;
- (void)drawRect:;
- (id)colors;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
