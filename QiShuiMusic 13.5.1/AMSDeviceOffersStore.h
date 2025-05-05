@interface AMSDeviceOffersStore : NSObject
@property (nonatomic) NSArray cachedRegistrationGroups;
@property (nonatomic) NSArray companionSerialNumbers;
@property (nonatomic) NSDictionary deviceOfferEligibility;
@property (nonatomic) NSArray deviceOffers;
@property (nonatomic) NSArray deviceRegistrationBlacklist;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDeviceOfferEligibility:;
- (void)setDeviceRegistrationBlacklist:;
- (id)cachedRegistrationGroups;
- (id)deviceRegistrationBlacklist;
- (id)deviceOffers;
- (id)deviceOfferEligibility;
- (void)removeCachedRegistrationItem:;
- (void)setCachedRegistrationGroups:;
- (id)companionSerialNumbers;
- (void)setDeviceOffers:;
- (void)_dbSetNullableValue:forKey:error:;
+ (id)splitGroups:byItem:;
+ (id)serialsBySubtractingAGroups:fromBGroups:;
+ (id)serialsFromGroups:;
@end
