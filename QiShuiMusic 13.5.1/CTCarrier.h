@interface CTCarrier : NSObject
@property (nonatomic) NSString carrierName;
@property (nonatomic) NSString mobileCountryCode;
@property (nonatomic) NSString mobileNetworkCode;
@property (nonatomic) NSString isoCountryCode;
@property (nonatomic) BOOL allowsVOIP;
- (id)tm_hook_network_mobileCountryCode;
- (id)tm_hook_network_mobileNetworkCode;
- (id)tspk_network_mobileCountryCode;
- (id)tspk_network_mobileNetworkCode;
- (id)init;
- (id)mobileNetworkCode;
- (void)setCarrierName:;
- (id)isoCountryCode;
- (void)setAllowsVOIP:;
- (BOOL)allowsVOIP;
- (id)carrierName;
- (void).cxx_destruct;
- (void)setIsoCountryCode:;
- (id)description;
- (id)mobileCountryCode;
- (void)setMobileCountryCode:;
- (void)setMobileNetworkCode:;
- (BOOL)isEqual:;
+ (void)tm_hook_network_preload;
+ (void)tspk_network_preload;
@end
