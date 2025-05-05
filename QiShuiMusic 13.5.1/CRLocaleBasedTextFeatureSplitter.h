@interface CRLocaleBasedTextFeatureSplitter : CRMultiModelTextFeatureSplitter
- (id)initWithConfiguration:;
- (id)preferredLocales;
- (void)enumerateTextFeatures:usingBlock:;
- (id)_scriptCategoryLocaleMappingForScriptCategoryRevision:;
- (id)_preferredLocaleFromScriptLocales:;
- (void)preferredLocaleBasedScriptVoting:;
@end
