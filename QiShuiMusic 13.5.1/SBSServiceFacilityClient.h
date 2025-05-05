@interface SBSServiceFacilityClient : FBSServiceFacilityClient
- (void)_incrementCheckout;
- (id)initWithIdentifier:calloutQueue:;
- (id)initWithCalloutQueue:;
- (BOOL)_decrementCheckout;
+ (id)serviceFacilityIdentifier;
+ (id)checkOutClientWithClass:;
+ (void)checkInClient:;
@end
