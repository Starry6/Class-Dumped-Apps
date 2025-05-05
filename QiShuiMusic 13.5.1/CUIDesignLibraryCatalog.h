@interface CUIDesignLibraryCatalog : NSObject
@property (nonatomic) q designSystem;
@property (nonatomic) q colorScheme;
@property (nonatomic) q contrast;
@property (nonatomic) q styling;
- (void)setStyling:;
- (void)dealloc;
- (void)setDesignSystem:;
- (long long)contrast;
- (void)setContrast:;
- (long long)colorScheme;
- (long long)designSystem;
- (id)shapeEffectPresetWithName:error:;
- (id)description;
- (long long)styling;
- (void)setColorScheme:;
- (id)initWithURL:error:;
- (id)_colorNameStringFromNameEnum:palette:;
- (id)colorWithName:palette:displayGamut:error:;
+ (id)_catalogPathComponentForDesignSystem:colorScheme:contrast:styling:error:;
+ (id)catalogForDesignSystem:colorScheme:contrast:styling:error:;
+ (id)_bundleNameForResolvedDesignSystem:;
@end
