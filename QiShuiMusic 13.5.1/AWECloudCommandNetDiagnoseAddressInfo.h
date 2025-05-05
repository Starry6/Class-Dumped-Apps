@interface AWECloudCommandNetDiagnoseAddressInfo : NSObject
+ (id)_formatIPV4Address:;
+ (id)_formatIPV6Address:;
+ (id)_getGatewayIPV4Address;
+ (id)_getGatewayIPV6Address;
+ (id)_getIPV4DNSWithHostName:;
+ (id)_getIPV6DNSWithHostName:;
+ (id)deviceIPAdress;
+ (id)getDNSsWithDormain:;
+ (id)getGatewayIPAddress;
+ (id)outPutDNSServers;
@end
