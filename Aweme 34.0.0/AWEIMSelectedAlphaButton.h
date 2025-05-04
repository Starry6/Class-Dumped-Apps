@interface AWEIMSelectedAlphaButton : UIButton
@property (nonatomic) double selectedAlpha;
@property (nonatomic) double disabledAlpha;
- (void)setSelectedAlpha:;
- (double)selectedAlpha;
- (void)setDisabledAlpha:;
- (void)setHighlighted:;
- (double)disabledAlpha;
+ (id)buttonWithSelectedAlpha:disabledAlpha:;
@end
