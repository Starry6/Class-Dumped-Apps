@interface MPModelObject : NSObject
@property (nonatomic) {MPLibraryAddStatusObserverConfiguration=BBBBB} libraryAddStatusObserverConfiguration;
@property (nonatomic) q libraryRemovalSupportedOptions;
@property (nonatomic) MPIdentifierSet originalIdentifierSet;
@property (nonatomic) NSString humanDescription;
@property (nonatomic) MPIdentifierSet identifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithIdentifiers:;
- (id)_stateDumpObject;
- (id)humanDescription;
- (id)identifiers;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)valueForUndefinedKey:;
- (void)encodeWithCoder:;
- (void)setValue:forUndefinedKey:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)contentItemCollectionInfo;
- (id)mediaItemPropertyValues;
- (id)libraryAddStatusObserverConfiguration;
- (id)initWithIdentifiers:block:;
- (id)copyWithIdentifiers:;
- (id)copyWithIdentifiers:block:;
- (id)copyWithPropertySet:;
- (id)copyWithIdentifiers:propertySet:;
- (id)originalIdentifierSet;
- (BOOL)hasLoadedValueForKey:;
- (BOOL)hasLoadedValuesForPropertySet:;
- (id)mergeWithObject:;
- (id)valueForModelKey:;
- (void)setValue:forModelKey:;
- (BOOL)_isModelKey:;
- (id)_sanitizedStorage;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
+ (BOOL)resolveInstanceMethod:;
+ (BOOL)supportsSecureCoding;
+ (long long)genericObjectType;
+ (id)classesForSecureCoding;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (void)performWithoutEnforcement:;
+ (void)_indexProperties;
+ (BOOL)_lookupPropertyForSelector:result:;
+ (id)_modelKeyForPropertySelector:;
+ (id)requiredLibraryRemovalProperties;
+ (BOOL)supportsLibraryRemoval;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
@end
