@interface INGetReservationDetailsIntent : INIntent
@property (nonatomic) INSpeakableString reservationContainerReference;
@property (nonatomic) NSArray reservationItemReferences;
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
- (id)reservationContainerReference;
- (void)setReservationContainerReference:;
- (id)reservationItemReferences;
- (void)setReservationItemReferences:;
- (id)initWithReservationContainerReference:reservationItemReferences:;
@end
