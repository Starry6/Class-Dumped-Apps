@interface TRICellularParameterManager : NSObject
@property (nonatomic) NSString carrierBundleIdentifier;
@property (nonatomic) NSString carrierCountryIsoCode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preferredDataSimChanged:;
- (id)carrierBundleIdentifier;
- (id)carrierCountryIsoCode;
- (void)carrierBundleChange:;
- (id)_fetchCarrierBundleIdentifier:;
- (void)setCarrierBundleIdentifier:;
- (void)setCarrierCountryIsoCode:;
- (id)init;
- (void)subscriberCountryCodeDidChange:;
- (id)_fetchCarrierCountryIsoCode:;
- (void).cxx_destruct;
- (id)_dispatchQueueForCarrierInfoGathering;
+ (id)sharedInstance;
@end
