@interface INSaveProfileInCarIntent : INIntent
@property (nonatomic) NSString profileLabel;
@property (nonatomic) NSNumber profileNumber;
@property (nonatomic) NSString profileName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (id)profileName;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (id)_metadata;
- (id)profileNumber;
- (void)setProfileNumber:;
- (void)setProfileName:;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (id)initWithProfileNumber:profileLabel:;
- (id)profileLabel;
- (id)initWithProfileNumber:profileName:;
@end
