@interface AWEUIButton : UIButton
@property (nonatomic) BOOL needChangeAlphaWhenPressed;
@property (nonatomic) BOOL needHighlightAnimation;
@property (nonatomic) BOOL usingConstColor;
@property (nonatomic) double selectedAlpha;
@property (nonatomic) @? tappedBlock;
- (void)invokeTouchUpInsideButtonBlock:;
- (void)setTappedBlock:;
- (BOOL)usingConstColor;
- (BOOL)needChangeAlphaWhenPressed;
- (BOOL)needHighlightAnimation;
- (double)selectedAlpha;
- (void)setNeedChangeAlphaWhenPressed:;
- (void)setNeedHighlightAnimation:;
- (void)setSelectedAlpha:;
- (void)setUsingConstColor:;
- (id)tappedBlock;
- (void).cxx_destruct;
- (void)setHighlighted:;
@end
