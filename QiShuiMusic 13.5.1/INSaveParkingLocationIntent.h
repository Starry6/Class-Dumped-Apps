@interface INSaveParkingLocationIntent : INIntent
@property (nonatomic) CLPlacemark parkingLocation;
@property (nonatomic) NSString parkingNote;
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
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (id)parkingLocation;
- (void)setParkingLocation:;
- (id)parkingNote;
- (void)setParkingNote:;
- (id)initWithParkingLocation:parkingNote:;
@end
