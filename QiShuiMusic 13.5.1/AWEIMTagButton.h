@interface AWEIMTagButton : UIButton
@property (nonatomic) Q style;
@property (nonatomic) double awe_spacing;
- (void)setAwe_spacing:;
- (double)awe_spacing;
- (void)resizeFrame;
- (void)layoutSubviews;
- (void)setStyle:;
- (unsigned long long)style;
- (id)initWithStyle:;
@end
