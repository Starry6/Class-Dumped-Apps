@interface INSearchForMediaIntent : INIntent
@property (nonatomic) NSArray mediaItems;
@property (nonatomic) INMediaSearch mediaSearch;
@property (nonatomic) INPrivateSearchForMediaIntentData privateSearchForMediaIntentData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (id)_metadata;
- (id)mediaItems;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (void)setMediaItems:;
- (id)mediaSearch;
- (void)setMediaSearch:;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (id)privateSearchForMediaIntentData;
- (void)setPrivateSearchForMediaIntentData:;
- (id)initWithMediaItems:mediaSearch:;
@end
