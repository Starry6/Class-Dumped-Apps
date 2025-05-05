@interface INShareFocusStatusIntent : INIntent
@property (nonatomic) INFocusStatus focusStatus;
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
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:context:error:;
- (id)focusStatus;
- (void)setFocusStatus:;
- (id)initWithFocusStatus:;
@end
