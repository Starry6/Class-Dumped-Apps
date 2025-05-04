@interface AWEIMTagButton : UIButton
@property (nonatomic) Q style;
@property (nonatomic) double awe_spacing;
- (void)resizeFrame;
- (double)awe_spacing;
- (void)setAwe_spacing:;
- (unsigned long long)style;
- (id)initWithStyle:;
- (void)layoutSubviews;
- (void)setStyle:;
@end
