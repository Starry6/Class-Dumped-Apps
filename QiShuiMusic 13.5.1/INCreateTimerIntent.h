@interface INCreateTimerIntent : INIntent
@property (nonatomic) INSpeakableString label;
@property (nonatomic) double duration;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (void)setType:;
- (void)setLabel:;
- (id)label;
- (void)setDuration:;
- (long long)type;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (double)duration;
- (id)_metadata;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (id)initWithLabel:duration:type:;
@end
