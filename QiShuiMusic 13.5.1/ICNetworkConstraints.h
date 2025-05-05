@interface ICNetworkConstraints : NSObject
- (id)init;
- (BOOL)shouldAllowDataForCellularNetworkTypes;
- (id)initWithBundleIdentifier:;
- (unsigned long long)hash;
- (id)_copyWithClass:zone:;
- (BOOL)shouldAllowDataForNetworkType:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)sizeLimitForNetworkType:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)shouldAllowDataForWiFiNetworkTypes;
+ (id)mediaTypeNetworkConstraintsFromURLBag:;
+ (id)constraintsForSystemApplicationType:;
@end
