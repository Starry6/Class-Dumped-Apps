@interface BUNetworkRatingUtils : NSObject
+ (id)getPublicIPAddressWithStunAddr:;
+ (id)getCurrentGatewayInfo:;
+ (id)getCurrentGatewayInfoForWiFi;
+ (id)getNetProxyStatus;
@end
