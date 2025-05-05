@interface AXMLanguageTranslator : NSObject
@property (nonatomic) _LTTranslator translator;
- (id)translator;
- (id)init;
- (void)setTranslator:;
- (void).cxx_destruct;
- (id)_proposedTranslationLocaleForLocale:;
- (void)availableTranslationLocales:;
- (void)userSelectableTranslationLocales:;
- (void)installedTranslationLocales:;
- (void)installOfflineTranslationModelForLocales:fallBackToBaseLanguageIfNeeded:forceReinstall:progress:completion:;
- (id)_filteredLocalesToInstallFromAvailableLocales:requestedLocales:fallBackToBaseLanguageIfNeeded:;
- (void)installOfflineTranslationModelForLanguageCodeIfNeeded:progress:completion:;
- (void)translateText:toLocale:respectAllowList:completion:;
- (id)translateText:toLocale:respectAllowList:metrics:error:;
- (id)_localeIdentifiersForLocales:;
- (id)_descriptionForLocales:;
- (id)_canonicalLocaleForLocale:;
- (id)_canonicalLocalesForLocales:;
+ (id)allowedTargetLocalesForTranslation;
@end
