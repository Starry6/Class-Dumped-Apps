@interface LNActionMetadata : NSObject
@property (nonatomic) LNStaticDeferredLocalizedString actionDescription;
@property (nonatomic) NSString effectiveBundleIdentifier;
@property (nonatomic) q presentationStyle;
@property (nonatomic) NSString iconSystemImageName;
@property (nonatomic) BOOL requiresMDMChecks;
@property (nonatomic) BOOL sessionStartingAction;
@property (nonatomic) NSString nullableEffectiveBundleIdentifier;
@property (nonatomic) NSDictionary mangledTypeNameByBundleIdentifier;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSOrderedSet effectiveBundleIdentifiers;
@property (nonatomic) LNStaticDeferredLocalizedString title;
@property (nonatomic) LNActionDescriptionMetadata descriptionMetadata;
@property (nonatomic) LNValueType outputType;
@property (nonatomic) Q outputFlags;
@property (nonatomic) BOOL openAppWhenRun;
@property (nonatomic) q authenticationPolicy;
@property (nonatomic) NSArray systemProtocols;
@property (nonatomic) LNActionConfiguration actionConfiguration;
@property (nonatomic) NSString customIntentClassName;
@property (nonatomic) q bundleMetadataVersion;
@property (nonatomic) NSDictionary availabilityAnnotations;
@property (nonatomic) NSArray parameters;
@property (nonatomic) NSDictionary typeSpecificMetadata;
@property (nonatomic) NSDictionary shortcutsMetadata;
@property (nonatomic) NSString mangledTypeName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)presentationStyle;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)parameters;
- (void)encodeWithCoder:;
- (id)title;
- (id)effectiveBundleIdentifier;
- (long long)authenticationPolicy;
- (id)actionDescription;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)iconSystemImageName;
- (id)actionConfiguration;
- (id)outputType;
- (id)mangledTypeName;
- (id)mangledTypeNameByBundleIdentifier;
- (id)effectiveBundleIdentifiers;
- (id)descriptionMetadata;
- (BOOL)openAppWhenRun;
- (unsigned long long)outputFlags;
- (id)systemProtocols;
- (id)typeSpecificMetadata;
- (id)customIntentClassName;
- (id)availabilityAnnotations;
- (id)metadataByAddingEffectiveBundleIdentifiers:mangledTypeName:;
- (id)initWithIdentifier:mangledTypeName:mangledTypeNameByBundleIdentifier:effectiveBundleIdentifiers:bundleMetadataVersion:title:descriptionMetadata:openAppWhenRun:authenticationPolicy:outputType:outputFlags:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:customIntentClassName:availabilityAnnotations:shortcutsMetadata:;
- (id)mangledTypeNameForBundleIdentifier:;
- (id)actionMetadataWithParameters:;
- (long long)bundleMetadataVersion;
- (id)shortcutsMetadata;
- (id)nullableEffectiveBundleIdentifier;
- (BOOL)isSessionStartingAction;
- (BOOL)requiresMDMChecks;
- (id)initWithIdentifier:mangledTypeName:title:descriptionMetadata:openAppWhenRun:authenticationPolicy:outputType:outputFlags:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:title:descriptionMetadata:presentationStyle:authenticationPolicy:outputType:outputFlags:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:title:descriptionMetadata:presentationStyle:authenticationPolicy:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:title:description:presentationStyle:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:effectiveBundleIdentifiers:title:description:presentationStyle:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:effectiveBundleIdentifiers:title:description:presentationStyle:outputType:parameters:systemProtocols:sessionStartingAction:actionConfiguration:typeSpecificMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:effectiveBundleIdentifier:title:description:presentationStyle:outputType:parameters:systemProtocols:sessionStartingAction:actionConfiguration:typeSpecificMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:effectiveBundleIdentifier:title:description:presentationStyle:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:effectiveBundleIdentifier:title:description:presentationStyle:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:;
- (id)initWithIdentifier:effectiveBundleIdentifier:title:description:presentationStyle:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:;
- (id)initWithIdentifier:title:description:presentationStyle:outputType:parameters:systemProtocols:actionConfiguration:;
- (id)initWithIdentifier:mangledTypeName:mangledTypeNameByBundleIdentifier:effectiveBundleIdentifiers:bundleMetadataVersion:title:descriptionMetadata:openAppWhenRun:authenticationPolicy:outputType:outputFlags:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:customIntentClassName:shortcutsMetadata:;
- (id)initWithIdentifier:mangledTypeName:mangledTypeNameByBundleIdentifier:effectiveBundleIdentifiers:bundleMetadataVersion:title:descriptionMetadata:presentationStyle:authenticationPolicy:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:iconSystemImageName:customIntentClassName:shortcutsMetadata:;
- (id)initWithIdentifier:mangledTypeName:mangledTypeNameByBundleIdentifier:effectiveBundleIdentifiers:bundleMetadataVersion:title:descriptionMetadata:presentationStyle:authenticationPolicy:outputType:outputFlags:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:iconSystemImageName:customIntentClassName:shortcutsMetadata:;
- (id)initWithIdentifier:mangledTypeName:mangledTypeNameByBundleIdentifier:effectiveBundleIdentifiers:bundleMetadataVersion:title:description:presentationStyle:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:iconSystemImageName:shortcutsMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:effectiveBundleIdentifiers:bundleMetadataVersion:title:description:presentationStyle:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:iconSystemImageName:shortcutsMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:effectiveBundleIdentifiers:bundleMetadataVersion:title:description:presentationStyle:outputType:parameters:systemProtocols:sessionStartingAction:actionConfiguration:typeSpecificMetadata:iconSystemImageName:shortcutsMetadata:customIntentClassName:requiresMDMChecks:;
- (id)initWithIdentifier:mangledTypeName:effectiveBundleIdentifiers:bundleMetadataVersion:title:description:presentationStyle:outputType:parameters:systemProtocols:sessionStartingAction:actionConfiguration:typeSpecificMetadata:iconSystemImageName:shortcutsMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:effectiveBundleIdentifiers:title:description:presentationStyle:outputType:parameters:systemProtocols:sessionStartingAction:actionConfiguration:typeSpecificMetadata:iconSystemImageName:shortcutsMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:effectiveBundleIdentifier:title:description:presentationStyle:outputType:parameters:systemProtocols:sessionStartingAction:actionConfiguration:typeSpecificMetadata:iconSystemImageName:shortcutsMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:effectiveBundleIdentifier:title:description:presentationStyle:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:iconSystemImageName:shortcutsMetadata:customIntentClassName:;
- (id)initWithIdentifier:mangledTypeName:effectiveBundleIdentifier:title:description:presentationStyle:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:iconSystemImageName:shortcutsMetadata:;
- (id)initWithIdentifier:effectiveBundleIdentifier:title:description:presentationStyle:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:iconSystemImageName:shortcutsMetadata:;
- (id)initWithIdentifier:effectiveBundleIdentifier:title:description:presentationStyle:outputType:parameters:systemProtocols:actionConfiguration:typeSpecificMetadata:shortcutsMetadata:;
+ (BOOL)supportsSecureCoding;
@end
