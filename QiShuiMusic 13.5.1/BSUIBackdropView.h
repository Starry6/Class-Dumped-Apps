@interface BSUIBackdropView : _UIBackdropView
@property (nonatomic) double scaleForNoBlur;
@property (nonatomic) double rasterizationScale;
- (void)transitionIncrementallyToSettings:weighting:;
- (double)rasterizationScale;
- (void)transitionComplete;
- (double)scaleForNoBlur;
- (void)applySettings:;
- (void)setRasterizationScale:;
- (void)setScaleForNoBlur:;
@end
