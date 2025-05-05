@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy
- (id)init;
- (void)dealloc;
- (void)addPolicy:;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (id)copyWithZone:;
@end
