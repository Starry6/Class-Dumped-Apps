@interface INSchema : NSObject
@property (nonatomic) NSMutableDictionary _schemaDictionary;
@property (nonatomic) NSMutableDictionary _parameterCombinationDictionary;
@property (nonatomic) NSMutableDictionary _configurableParameterCombinationDictionary;
@property (nonatomic) NSDictionary _typeForClassDictionary;
@property (nonatomic) NSDictionary _typeForSemanticKeypathDictionary;
@property (nonatomic) BOOL system;
@property (nonatomic) NSMutableDictionary _enums;
@property (nonatomic) NSMutableDictionary _types;
@property (nonatomic) NSString _mainBundleIdentifier;
@property (nonatomic) NSArray _definitionFileURLs;
- (id)init;
- (BOOL)isSystem;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)description;
- (id)_types;
- (id)intentCodableDescriptionWithIntentClassName:;
- (id)intentResponseCodableDescriptionWithIntentClassName:;
- (id)intentResponseCodableDescriptionWithIntentResponseClassName:;
- (id)_initWithContentsOfURLs:bundleIdentifier:;
- (id)_initWithContentsOfURLs:bundleIdentifier:mainBundleIdentifier:;
- (id)_initWithContentsOfURLs:bundleIdentifier:mainBundleIdentifier:contentOptions:;
- (id)_initWithContentsOfURLs:;
- (id)intentWithName:;
- (id)_codableDescriptionWithDictionary:intentDefinitionNamespace:filename:bundleIdentifier:codableDescriptionClass:;
- (id)_typesWithDictionary:filename:bundleIdentifier:;
- (id)_intentWithDictionary:intentDefinitionNamespace:filename:bundleIdentifier:;
- (id)_intentResponseWithDictionary:intentDefinitionNamespace:className:filename:bundleIdentifier:referencedCodableDescriptions:;
- (void)_loadIntentsFromArrayOfDictionaries:intentDefinitionNamespace:fromFile:bundleIdentifier:referencedCodableDescriptions:contentOptions:;
- (void)_setObjectDescription:forClass:identifier:;
- (id)_objectDescriptionForClass:identifier:;
- (id)_parameterCombinationsForClass:;
- (id)_parameterCombinationsForClassName:;
- (id)_configurableParameterCombinationsForClassName:;
- (id)_classNamesForClass:;
- (id)_codableDescriptionsForClass:;
- (id)_objectDescriptionForTypeOfClass:;
- (id)dictionaryRepresentationForIntent:;
- (id)dictionaryRepresentationForIntent:localizer:;
- (id)_dictionaryRepresentationForIntentCodableDescription:intentResponseCodableDescription:appInfo:localizer:;
- (id)_objectDescriptionWithSemanticKeypath:;
- (id)_schemaDictionary;
- (id)_parameterCombinationDictionary;
- (id)_configurableParameterCombinationDictionary;
- (id)_typeForClassDictionary;
- (id)_typeForSemanticKeypathDictionary;
- (id)_enums;
- (id)_mainBundleIdentifier;
- (id)_definitionFileURLs;
+ (id)_cache;
+ (id)defaultSchema;
+ (BOOL)supportsSecureCoding;
+ (id)_supportedTypesDictionary;
+ (id)_defaultSchemaForBundle:contentOptions:;
+ (id)_defaultSchemaForBundle:;
+ (id)_supportedClasses;
+ (id)_applicationBundleIdentifierFromBundleIdentifier:;
+ (id)schemaWithBundleRecord:fallbackToSystemSchema:;
+ (BOOL)_defaultSchemaCanSupportIntent:;
+ (void)_resetCache;
+ (id)systemSchema;
+ (id)_schemaWithIntentDefinitionURLs:bundleIdentifier:mainBundleIdentifier:contentOptions:;
@end
