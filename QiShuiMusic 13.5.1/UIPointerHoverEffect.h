@interface UIPointerHoverEffect : UIPointerEffect
@property (nonatomic) BOOL _tintViewTakesOnPointerShape;
@property (nonatomic) BOOL _tintViewUsesPointerMaterial;
@property (nonatomic) q preferredTintMode;
@property (nonatomic) BOOL prefersShadow;
@property (nonatomic) BOOL prefersScaledContent;
- (id)init;
- (id)settings;
- (unsigned long long)hash;
- (unsigned long long)options;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)constrainedAxes;
- (long long)preferredTintMode;
- (void)setPreferredTintMode:;
- (BOOL)prefersShadow;
- (void)setPrefersShadow:;
- (BOOL)prefersScaledContent;
- (void)setPrefersScaledContent:;
- (BOOL)_tintViewTakesOnPointerShape;
- (void)set_tintViewTakesOnPointerShape:;
- (BOOL)_tintViewUsesPointerMaterial;
- (void)set_tintViewUsesPointerMaterial:;
@end
