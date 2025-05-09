@interface INIntentCodableDescription : INRootCodableDescription
@property (nonatomic) NSString _inputAttributeName;
@property (nonatomic) NSString _keyAttributeName;
@property (nonatomic) NSString title;
@property (nonatomic) NSString titleLocID;
@property (nonatomic) NSString descriptiveText;
@property (nonatomic) NSString descriptiveTextLocID;
@property (nonatomic) NSString defaultImageName;
@property (nonatomic) q intentCategory;
@property (nonatomic) NSString verb;
@property (nonatomic) BOOL userConfirmationRequired;
@property (nonatomic) BOOL foreground;
@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL configurable;
@property (nonatomic) BOOL eligibleForSuggestions;
@property (nonatomic) BOOL eligibleForWidgets;
@property (nonatomic) INCodableAttribute inputAttribute;
@property (nonatomic) INCodableAttribute keyAttribute;
@property (nonatomic) NSArray phrases;
@property (nonatomic) NSNumber versioningHash;
@property (nonatomic) NSString localizedTitle;
@property (nonatomic) NSString localizedDescriptiveText;
@property (nonatomic) NSArray entityVerbs;
- (void)setForeground:;
- (void)updateWithDictionary:;
- (id)dictionaryRepresentationWithLocalizer:;
- (void)setVersioningHash:;
- (BOOL)isForeground;
- (BOOL)isDeprecated;
- (void)setTitle:;
- (id)initWithCoder:;
- (BOOL)userConfirmationRequired;
- (id)attributes;
- (void)setIntentCategory:;
- (id)localizedDescriptiveText;
- (void)encodeWithCoder:;
- (id)_attributeKey;
- (long long)intentCategory;
- (id)_attributesKey;
- (id)title;
- (void).cxx_destruct;
- (id)localizedTitle;
- (void)setUserConfirmationRequired:;
- (id)_ignoredAttributeTags;
- (id)versioningHash;
- (id)copyWithZone:;
- (id)phrases;
- (void)setPhrases:;
- (BOOL)isConfigurable;
- (id)verb;
- (void)setVerb:;
- (id)resolvableParameterCombinationsWithParameterCombinations:;
- (id)inputAttribute;
- (id)keyAttribute;
- (id)localizedTitleWithLocalizer:;
- (id)localizedDescriptiveTextWithLocalizer:;
- (void)_updateWithIntentCodableDescription:;
- (void)_establishReferencedCodableDescriptionsUsingTypes:intentResponseCodableDescription:;
- (void)_reestablishReferencedCodableDescriptionsUsingTypes:intentResponseCodableDescription:;
- (id)_inputAttributeName;
- (void)_setInputAttributeName:;
- (id)_keyAttributeName;
- (void)_setKeyAttributeName:;
- (id)titleLocID;
- (void)setTitleLocID:;
- (id)descriptiveText;
- (void)setDescriptiveText:;
- (id)descriptiveTextLocID;
- (void)setDescriptiveTextLocID:;
- (id)defaultImageName;
- (void)setDefaultImageName:;
- (void)setDeprecated:;
- (void)setConfigurable:;
- (BOOL)isEligibleForSuggestions;
- (void)setEligibleForSuggestions:;
- (BOOL)isEligibleForWidgets;
- (void)setEligibleForWidgets:;
- (id)entityVerbs;
- (void)setEntityVerbs:;
+ (id)__ConfigurableKey;
+ (id)__ParameterKey;
+ (id)__SummaryKey;
+ (id)__CategoryKey;
+ (id)__DefaultImageNameKey;
+ (BOOL)supportsSecureCoding;
+ (id)__ForegroundKey;
+ (id)__DeprecatedKey;
+ (id)__NameKey;
+ (id)__NameKey;
+ (id)__VerbAssociationsKey;
+ (id)__Key;
+ (id)__ParametersKey;
+ (id)__VerbKey;
+ (id)__TitleIDKey;
+ (id)__EligibleForWidgetsKey;
+ (id)__PhrasesKey;
+ (id)__ClassNameKey;
+ (id)__DescriptionIDKey;
+ (id)__InputKey;
+ (id)__DescriptionKey;
+ (id)__KeyParameterKey;
+ (id)__HashKey;
+ (id)__ClassPrefixKey;
+ (id)__IneligibleForSuggestionsKey;
+ (id)__EntityKey;
+ (id)_intentClassNameWithDictionary:;
+ (id)__TitleKey;
+ (id)__UserConfirmationRequiredKey;
@end
