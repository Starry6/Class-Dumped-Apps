@interface INPlayMessageSoundIntent : INIntent
@property (nonatomic) q soundType;
@property (nonatomic) NSString messageIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (void)setSoundType:;
- (long long)soundType;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (id)messageIdentifier;
- (id)_metadata;
- (void)setMessageIdentifier:;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (id)initWithSoundType:messageIdentifier:;
@end
