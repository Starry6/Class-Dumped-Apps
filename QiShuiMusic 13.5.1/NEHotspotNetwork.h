@interface NEHotspotNetwork : NSObject
@property (nonatomic) q securityType;
@property (nonatomic) NSString SSID;
@property (nonatomic) NSString BSSID;
- (id)tm_hook_wifi_BSSID;
- (id)tm_hook_wifi_SSID;
- (id)tspk_wifi_BSSID;
- (id)tspk_wifi_SSID;
- (long long)securityType;
- (BOOL)isSecure;
- (double)signalStrength;
- (void)setSecurityType:;
- (void)setPassword:;
- (id)SSID;
- (void)setConfidence:;
- (void)dealloc;
- (id)description;
- (id)BSSID;
- (BOOL)didAutoJoin;
- (BOOL)didJustJoin;
- (BOOL)isChosenHelper;
+ (void)tm_hook_wifi_fetchCurrentWithCompletionHandler:;
+ (void)tm_hook_wifi_preload;
+ (void)tspk_wifi_fetchCurrentWithCompletionHandler:;
+ (void)tspk_wifi_preload;
+ (void)fetchCurrentWithCompletionHandler:;
@end
