@interface CEKLightingNameBadge : CEKBadgeTextView
@property (nonatomic) UIView _snapshotView;
@property (nonatomic) q lightingType;
@property (nonatomic) BOOL highlighted;
- (void)_updateText;
- (long long)lightingType;
- (BOOL)isHighlighted;
- (id)initWithFrame:;
- (void)setHighlighted:animated:;
- (void)setLightingType:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)_setSnapshotView:;
- (id)_snapshotView;
- (void)_updateColorsAnimated:;
@end
