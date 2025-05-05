@interface CUIDesignLibraryCompositeCatalog : NSObject
- (void)dealloc;
- (id)initWithCatalogs:;
- (id)shapeEffectPresetWithName:error:;
- (id)colorWithName:palette:displayGamut:error:;
+ (id)_catalogsForDesignSystem:colorScheme:contrast:styling:error:;
+ (id)compositeCatalogForDesignSystem:colorScheme:contrast:styling:error:;
@end
