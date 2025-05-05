@interface INFindDeviceAndPlaySoundIntent : INIntent
@property (nonatomic) NSArray devices;
@property (nonatomic) NSNumber isStopRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDevices:;
- (id)_dictionaryRepresentation;
- (id)devices;
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
- (id)isStopRequest;
- (void)setIsStopRequest:;
- (id)initWithDevices:isStopRequest:;
@end
