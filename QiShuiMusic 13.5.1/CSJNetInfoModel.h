@interface CSJNetInfoModel : NSObject
@property (nonatomic) NSString csj_IP;
@property (nonatomic) NSString csj_IPv4;
@property (nonatomic) NSString csj_IPv6;
@property (nonatomic) NSString csj_wifi_bssid;
- (void)updateWithIPv4:;
- (void)updateWithIPv6:;
- (id)applogNetInfoCustom;
- (id)csj_IP;
- (id)csj_IPv4;
- (id)csj_IPv6;
- (id)csj_wifi_bssid;
- (id)ipInfoStr;
- (id)ipv4InfoStr;
- (id)ipv6InfoStr;
- (void)setCsj_IP:;
- (void)setCsj_IPv4:;
- (void)setCsj_IPv6:;
- (void)setCsj_wifi_bssid:;
- (void)updateWithIP:;
- (void)updateWithWiFiBSSID:;
- (id)wifiBSSIDInfoStr;
- (void).cxx_destruct;
@end
