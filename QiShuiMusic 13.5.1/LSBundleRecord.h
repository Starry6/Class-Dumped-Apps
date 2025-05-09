@interface LSBundleRecord : LSRecord
@property (nonatomic) LSApplicationRecord if_containingAppRecord;
@property (nonatomic) LSApplicationRecord containingApplicationRecord;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) c developerType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) LSPropertyList infoDictionary;
@property (nonatomic) LSPropertyList entitlements;
@property (nonatomic) NSURL dataContainerURL;
@property (nonatomic) NSDictionary groupContainerURLs;
@property (nonatomic) NSString localizedName;
@property (nonatomic) NSString localizedShortName;
@property (nonatomic) NSString signerOrganization;
@property (nonatomic) NSString signerIdentity;
@property (nonatomic) BOOL profileValidated;
@property (nonatomic) BOOL UPPValidated;
@property (nonatomic) BOOL freeProfileValidated;
@property (nonatomic) I codeSignatureVersion;
@property (nonatomic) Q compatibilityState;
@property (nonatomic) NSArray managedPersonas;
@property (nonatomic) NSArray UIBackgroundModes;
@property (nonatomic) NSString accentColorName;
@property (nonatomic) NSArray WKBackgroundModes;
@property (nonatomic) BOOL supportsNowPlaying;
@property (nonatomic) NSDictionary intentDefinitionURLs;
@property (nonatomic) NSArray supportedIntents;
@property (nonatomic) NSArray intentsRestrictedWhileLocked;
@property (nonatomic) NSArray intentsRestrictedWhileProtectedDataUnavailable;
@property (nonatomic) NSArray supportedIntentMediaCategories;
@property (nonatomic) _LSLocalizedStringRecord _localizedName;
@property (nonatomic) _LSLocalizedStringRecord _localizedShortName;
@property (nonatomic) _LSLocalizedStringRecord _localizedMicrophoneUsageDescription;
@property (nonatomic) _LSLocalizedStringRecord _localizedIdentityUsageDescription;
@property (nonatomic) _LSLazyPropertyList _rawGroupContainerURLs;
@property (nonatomic) {LSBundleBaseFlags=b1b1b1b1b1} _baseFlags;
@property (nonatomic) FSNode _node;
@property (nonatomic) r^{?=[8I]} _auditToken;
@property (nonatomic) {LSVersionNumber=[32C]} _bundleVersion;
@property (nonatomic) LSBundleRecord _realRecord;
@property (nonatomic) BOOL _usesSystemPersona;
@property (nonatomic) BOOL _containerized;
@property (nonatomic) Q _containerClass;
@property (nonatomic) NSURL _dataContainerURLFromDatabase;
@property (nonatomic) C _profileValidationState;
@property (nonatomic) NSString _fallbackLocalizedName;
@property (nonatomic) BOOL isAppleInternal;
@property (nonatomic) BOOL isLinkEnabled;
@property (nonatomic) LSBundleProxy compatibilityObject;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString applicationIdentifier;
@property (nonatomic) NSString teamIdentifier;
@property (nonatomic) NSURL URL;
@property (nonatomic) NSURL executableURL;
@property (nonatomic) NSString bundleVersion;
@property (nonatomic) c developerType;
@property (nonatomic) NSDate registrationDate;
@property (nonatomic) NSArray machOUUIDs;
@property (nonatomic) NSString SDKVersion;
@property (nonatomic) I platform;
@property (nonatomic) BOOL builtWithThreadSanitizer;
@property (nonatomic) NSSet claimRecords;
@property (nonatomic) NSSet exportedTypeRecords;
@property (nonatomic) NSSet importedTypeRecords;
@property (nonatomic) NSSet serviceRecords;
- (id)if_containingAppRecord;
- (id)if_allIntentDefinitionURLs;
- (id)containingApplicationRecord;
- (BOOL)_IS_allows1016Sufix;
- (id)_IS_iconProvidingLineageForRecord:;
- (id)_IS_iconDictionaryForTag:tagClass:;
- (id)_IS_iconDictionaryForType:;
- (id)applicationIdentifier;
- (id)registrationDate;
- (id)localizedShortName;
- (id)localizedUsageDescriptionForFeature:preferredLocalizations:;
- (id)bundleVersion;
- (id)entitlements;
- (id)infoDictionary;
- (char)developerType;
- (id)bundleIdentifier;
- (id)localizedShortNameWithPreferredLocalizations:;
- (void)dealloc;
- (id)supportedIntents;
- (id)dataContainerURL;
- (id)WKBackgroundModes;
- (id)intentsRestrictedWhileLocked;
- (id)teamIdentifier;
- (id)machOUUIDs;
- (id)accentColorName;
- (id)localizedName;
- (id)signerIdentity;
- (id)_localizedShortName;
- (id)signerOrganization;
- (id)initWithCoder:;
- (id)executableURL;
- (unsigned long long)hash;
- (id)localizedUsageDescriptionForFeature:;
- (id)debugDescription;
- (id)SDKVersion;
- (id)managedPersonas;
- (void)encodeWithCoder:;
- (BOOL)isAppleInternal;
- (id)_localizedName;
- (id)_auditToken;
- (BOOL)supportsNowPlaying;
- (id)serviceRecords;
- (BOOL)wasBuiltWithThreadSanitizer;
- (id)UIBackgroundModes;
- (unsigned int)platform;
- (void).cxx_destruct;
- (BOOL)isUPPValidated;
- (id)_realRecord;
- (id)supportedIntentMediaCategories;
- (void)_detachFromContext:tableID:unitID:unitBytes:;
- (id)description;
- (BOOL)isProfileValidated;
- (id)intentDefinitionURLs;
- (BOOL)isFreeProfileValidated;
- (BOOL)isEqual:;
- (id)URL;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (id)localizedNameWithPreferredLocalizations:;
- (id)copyWithZone:;
- (unsigned long long)_containerClass;
- (BOOL)_usesSystemPersona;
- (id)groupContainerURLs;
- (id)_initWithNode:bundleIdentifier:context:tableID:unitID:bundleBaseData:error:;
- (unsigned long long)compatibilityState;
- (BOOL)_containerized;
- (id)_initWithContext:persistentIdentifierData:length:;
- (unsigned int)codeSignatureVersion;
- (id)_bundleVersion;
- (id)teamIdentifierWithContext:tableID:unitID:unitBytes:;
- (id)executableURLWithContext:tableID:unitID:unitBytes:;
- (char)developerTypeWithContext:tableID:unitID:unitBytes:;
- (id)registrationDateWithContext:tableID:unitID:unitBytes:;
- (id)machOUUIDsWithContext:tableID:unitID:unitBytes:;
- (id)SDKVersionWithContext:tableID:unitID:unitBytes:;
- (unsigned int)platformWithContext:tableID:unitID:unitBytes:;
- (id)claimRecordsWithContext:tableID:unitID:unitBytes:;
- (id)exportedTypeRecordsWithContext:tableID:unitID:unitBytes:;
- (id)importedTypeRecordsWithContext:tableID:unitID:unitBytes:;
- (BOOL)isLinkEnabledWithContext:tableID:unitID:unitBytes:;
- (BOOL)isAppleInternalWithContext:tableID:unitID:unitBytes:;
- (id)_bundleVersionWithContext:tableID:unitID:unitBytes:;
- (unsigned char)_profileValidationStateWithContext:tableID:unitID:unitBytes:;
- (id)_rawGroupContainerURLsWithContext:tableID:unitID:unitBytes:;
- (id)_baseFlagsWithContext:tableID:unitID:unitBytes:;
- (id)_dataContainerURLFromDatabaseWithContext:tableID:unitID:unitBytes:;
- (id)_localizedNameWithContext:tableID:unitID:unitBytes:;
- (id)_localizedShortNameWithContext:tableID:unitID:unitBytes:;
- (id)_localizedMicrophoneUsageDescriptionWithContext:tableID:unitID:unitBytes:;
- (id)_localizedIdentityUsageDescriptionWithContext:tableID:unitID:unitBytes:;
- (id)_localizedMicrophoneUsageDescription;
- (id)_localizedIdentityUsageDescription;
- (id)claimRecords;
- (id)exportedTypeRecords;
- (id)importedTypeRecords;
- (id)_rawGroupContainerURLs;
- (void)_LSRecord_resolve_teamIdentifier;
- (void)_LSRecord_resolve_executableURL;
- (void)_LSRecord_resolve_developerType;
- (void)_LSRecord_resolve_registrationDate;
- (void)_LSRecord_resolve_machOUUIDs;
- (void)_LSRecord_resolve_SDKVersion;
- (void)_LSRecord_resolve_platform;
- (void)_LSRecord_resolve_claimRecords;
- (id)exported:typesWithContext:tableID:unitID:unitBytes:;
- (void)_LSRecord_resolve_exportedTypeRecords;
- (void)_LSRecord_resolve_importedTypeRecords;
- (BOOL)isLinkEnabled;
- (void)_LSRecord_resolve_isLinkEnabled;
- (void)_LSRecord_resolve_isAppleInternal;
- (void)_LSRecord_resolve__bundleVersion;
- (unsigned char)_profileValidationState;
- (void)_LSRecord_resolve__profileValidationState;
- (void)_LSRecord_resolve__rawGroupContainerURLs;
- (id)_baseFlags;
- (void)_LSRecord_resolve__baseFlags;
- (id)_dataContainerURLFromDatabase;
- (void)_LSRecord_resolve__dataContainerURLFromDatabase;
- (id)_cachedDataContainerURL;
- (id)_fallbackLocalizedName;
- (void)_LSRecord_resolve__localizedName;
- (void)_LSRecord_resolve__localizedShortName;
- (id)_localizedShort:nameWithContext:tableID:unitID:bundleData:;
- (void)_LSRecord_resolve__localizedMicrophoneUsageDescription;
- (void)_LSRecord_resolve__localizedIdentityUsageDescription;
- (id)_node;
- (id)infoDictionaryWithContext:tableID:unitID:unitBytes:;
- (void)_LSRecord_resolve_infoDictionary;
- (id)entitlementsWithContext:tableID:unitID:unitBytes:;
- (void)_LSRecord_resolve_entitlements;
- (BOOL)getDataContainerURL:error:;
- (id)signerOrganizationWithContext:tableID:unitID:unitBytes:;
- (id)signerIdentityWithContext:tableID:unitID:unitBytes:;
- (unsigned int)codeSignatureVersionWithContext:tableID:unitID:unitBytes:;
- (void)_LSRecord_resolve_signerOrganization;
- (void)_LSRecord_resolve_signerIdentity;
- (void)_LSRecord_resolve_codeSignatureVersion;
- (id)intentDefinitionURLsWithContext:tableID:unitID:unitBytes:;
- (void)_LSRecord_resolve_intentDefinitionURLs;
+ (id)doc_applicationExtensionRecordAtURL:;
+ (id)cls_appExtensionContainerBundleRecordForCurrentTask;
+ (id)cls_appExtensionContainerBundleRecordForConnection:;
+ (id)cls_appExtensionContainerBundleRecordWithProperties:;
+ (BOOL)supportsSecureCoding;
+ (id)_propertyClasses;
+ (id)bundleRecordForCurrentProcess;
+ (id)coreTypesBundleRecord;
+ (id)bundleRecordWithBundleIdentifier:allowPlaceholder:error:;
+ (id)bundleRecordWithApplicationIdentifier:error:;
+ (id)bundleRecordForAuditToken:error:;
+ (id)_bundleRecordForAuditToken:checkNSBundleMainBundle:error:;
@end
