@interface INAnswerCallIntent : INIntent
@property (nonatomic) q audioRoute;
@property (nonatomic) NSString callIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (void)setAudioRoute:;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (long long)audioRoute;
- (id)_metadata;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (id)callIdentifier;
- (void)setCallIdentifier:;
- (id)initWithAudioRoute:callIdentifier:;
- (id)initWithAudioRoute:;
@end
