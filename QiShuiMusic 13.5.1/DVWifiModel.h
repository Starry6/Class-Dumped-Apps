@interface DVWifiModel : NSObject
@property (nonatomic) NSString BSSID;
@property (nonatomic) NSString SSID;
@property (nonatomic) NSData SSIDDATA;
@property (nonatomic) NSString ifnam;
- (id)BSSID;
- (void)setBSSID:;
- (id)SSID;
- (void)setSSID:;
- (id)SSIDDATA;
- (void)setSSIDDATA:;
- (id)ifnam;
- (void)setIfnam:;
- (void).cxx_destruct;
+ (id)getSaveWifiInfo;
@end
