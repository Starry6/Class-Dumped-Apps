@interface PGVibrantFillView : UIView
- (id)hitTest:withEvent:;
- (void)tintColorDidChange;
- (id)initWithFrame:;
- (void)PG_updateVibrancyEffectForTintColor;
@end
