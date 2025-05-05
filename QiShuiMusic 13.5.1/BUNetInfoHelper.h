@interface BUNetInfoHelper : NSObject
+ (long long)GetNetWorkTypeCode;
+ (id)bu_getWiFiBSSID;
+ (id)GetNetWorkType;
+ (BOOL)isValidateIPV6:;
+ (id)bu_getIPAddress:preferIPv4:;
+ (id)bu_getIPAddresses;
+ (id)bu_getIPv4Address:;
+ (id)bu_getIPv6Address:;
+ (id)bu_userAgentString;
+ (BOOL)isValidateIP:;
+ (id)carrierName;
@end
