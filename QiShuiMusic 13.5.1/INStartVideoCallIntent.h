@interface INStartVideoCallIntent : INIntent
@property (nonatomic) NSArray contacts;
@property (nonatomic) q audioRoute;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)cd_saveToPeopleStore;
- (id)cd_recipients;
- (id)cd_sender;
- (long long)cd_interactionMechanism;
- (id)cd_groupName;
- (void)setContacts:;
- (id)_dictionaryRepresentation;
- (id)contacts;
- (void)setAudioRoute:;
- (id)_spotlightContentType;
- (void)_setMetadata:;
- (id)domain;
- (void)setDomain:;
- (long long)audioRoute;
- (id)_metadata;
- (id)initWithContacts:;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (BOOL)configureAttributeSet:includingData:;
- (id)_titleWithLocalizer:fromBundleURL:;
@end
