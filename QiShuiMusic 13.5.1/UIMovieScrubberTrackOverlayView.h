@interface UIMovieScrubberTrackOverlayView : UIView
- (void)setMaximumValue:;
- (void)layoutSubviews;
- (void)setEditing:;
- (void)setMinimumValue:;
- (id)initWithFrame:;
- (void)setValue:;
- (void).cxx_destruct;
- (void)animateFillFramesAway;
- (void)setStartValue:;
- (void)setEndValue:;
- (void)_updateLeftFill;
- (void)_updateRightFill;
- (void)_clampValueAndLayout;
- (void)setIsZoomed:;
- (void)setEditingHandle:;
@end
