@interface WBSWebExtensionLocalization : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithBundleURL:defaultLocale:uniqueIdentifier:extensionIdentifier:;
- (id)initWithRegionalLocalization:languageLocalization:defaultLocalization:withBestLocale:uniqueIdentifier:;
- (id)localizedDictionaryForDictionary:;
- (id)localizedStringForKey:withPlaceholders:;
- (id)_localizedArrayForArray:;
- (id)localizedStringForString:;
- (id)_predefinedMessagesForLocale:;
- (id)_stringByReplacingNamedPlaceholdersInString:withNamedPlaceholders:;
- (id)_stringByReplacingPositionalPlaceholdersInString:withValues:;
+ (BOOL)supportsSecureCoding;
@end
