@interface PGProgressIndicator : PGMaterialView
@property (nonatomic) double progress;
@property (nonatomic) UIColor customElapsedTrackTintColor;
@property (nonatomic) BOOL includesWaitingToPlayIndicator;
- (void)setFrame:;
- (void)layoutSubviews;
- (void)setProgress:;
- (void)_setCornerRadius:;
- (id)hitTest:withEvent:;
- (double)progress;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setCustomElapsedTrackTintColor:;
- (void)setIncludesWaitingToPlayIndicator:;
- (void)_performLayout;
- (void)_updateElapsedTrackTintColor;
- (void)_updatePulseAnimatorIfNeeded;
- (void)_transitionToPulseStateIfNeeded:;
- (void)_applyPulseState;
- (id)customElapsedTrackTintColor;
- (BOOL)includesWaitingToPlayIndicator;
@end
