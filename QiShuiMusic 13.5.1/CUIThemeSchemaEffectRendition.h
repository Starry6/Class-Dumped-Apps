@interface CUIThemeSchemaEffectRendition : CUIThemeRendition
- (void)dealloc;
- (id)effectPreset;
- (id)initWithCoreUIOptions:forKey:;
- (id)coreUIOptions;
- (id)referenceImage;
- (id)_rendererInitializationDictionary;
- (void)_initializeCoreUIOptions:;
- (BOOL)_generateReferenceImage;
@end
