@interface INSetAudioSourceInCarIntent : INIntent
@property (nonatomic) q audioSource;
@property (nonatomic) q relativeAudioSourceReference;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (id)_metadata;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (long long)audioSource;
- (void)setAudioSource:;
- (long long)relativeAudioSourceReference;
- (void)setRelativeAudioSourceReference:;
- (id)initWithAudioSource:relativeAudioSourceReference:;
@end
