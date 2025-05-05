@interface INSetRelationshipIntent : INIntent
@property (nonatomic) NSArray contactIdentifiers;
@property (nonatomic) INModifyRelationship targetRelationship;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contactIdentifiers;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (void)setContactIdentifiers:;
- (id)_metadata;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (id)targetRelationship;
- (void)setTargetRelationship:;
- (id)initWithContactIdentifiers:targetRelationship:;
@end
