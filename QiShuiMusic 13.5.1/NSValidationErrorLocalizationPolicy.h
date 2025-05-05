@interface NSValidationErrorLocalizationPolicy : NSObject
- (void)dealloc;
- (id)initWithURL:;
- (id)localizedPropertyNameForProperty:;
- (id)localizationDictionary;
- (id)localizedEntityNameForEntity:;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (id)localizedModelStringForKey:;
- (void)setLocalizationDictionary:;
- (id)_cachedObjectForKey:value:;
- (id)copyWithZone:;
@end
