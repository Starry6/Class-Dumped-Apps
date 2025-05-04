@interface AWEUIButton : UIButton
@property (nonatomic) BOOL needChangeAlphaWhenPressed;
@property (nonatomic) BOOL needHighlightAnimation;
@property (nonatomic) BOOL usingConstColor;
@property (nonatomic) double selectedAlpha;
@property (nonatomic) UIColor originBackgroundColor;
@property (nonatomic) @? tappedBlock;
- (id)tappedBlock;
- (void)setTappedBlock:;
- (void)setSelectedAlpha:;
- (id)originBackgroundColor;
- (void)setOriginBackgroundColor:;
- (double)selectedAlpha;
- (void)setUsingConstColor:;
- (void)setNeedHighlightAnimation:;
- (void)setNeedChangeAlphaWhenPressed:;
- (BOOL)needHighlightAnimation;
- (BOOL)needChangeAlphaWhenPressed;
- (BOOL)usingConstColor;
- (void)invokeTouchUpInsideButtonBlock:;
- (void)setHighlighted:;
- (void).cxx_destruct;
@end
