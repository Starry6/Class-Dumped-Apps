@interface CHSMutableWidgetTintParameters : CHSWidgetTintParameters
@property (nonatomic) q filterStyle;
@property (nonatomic) q fallbackFilterStyle;
@property (nonatomic) BSColor primaryTintColor;
@property (nonatomic) BSColor secondaryTintColor;
@property (nonatomic) double fraction;
@property (nonatomic) BOOL accentedAlternateBackground;
- (void)setAccentedAlternateBackground:;
- (void)setFraction:;
- (void)setPrimaryTintColor:;
- (void)setFilterStyle:;
- (void)setFallbackFilterStyle:;
- (void)setSecondaryTintColor:;
@end
