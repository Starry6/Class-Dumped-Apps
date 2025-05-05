@interface INActivateCarSignalIntent : INIntent
@property (nonatomic) INSpeakableString carName;
@property (nonatomic) Q signals;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (void)setSignals:;
- (void)_setMetadata:;
- (unsigned long long)signals;
- (id)domain;
- (void)setDomain:;
- (id)_metadata;
- (id)carName;
- (void)setCarName:;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (id)initWithCarName:signals:;
@end
