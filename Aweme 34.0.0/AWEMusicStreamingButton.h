@interface AWEMusicStreamingButton : UIButton
@property (nonatomic) float oriAlpha;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double selectedAlpha;
- (void)setSelectedAlpha:;
- (double)selectedAlpha;
- (void)setOriAlpha:;
- (float)oriAlpha;
- (BOOL)pointInside:withEvent:;
- (void)setHighlighted:;
- (BOOL)isAnimating;
- (void)setIsAnimating:;
@end
