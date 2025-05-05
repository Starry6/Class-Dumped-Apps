@interface INListRideOptionsIntent : INIntent
@property (nonatomic) CLPlacemark pickupLocation;
@property (nonatomic) CLPlacemark dropOffLocation;
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
- (id)pickupLocation;
- (void)setPickupLocation:;
- (id)dropOffLocation;
- (void)setDropOffLocation:;
- (id)initWithPickupLocation:dropOffLocation:;
@end
