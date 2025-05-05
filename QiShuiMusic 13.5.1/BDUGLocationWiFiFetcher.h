@interface BDUGLocationWiFiFetcher : NSObject
- (id)fetchWiFiInfoWithCert:;
- (id)getWifiInfoWithCert:;
- (id)init;
- (void)dealloc;
+ (id)sharedFetcher;
@end
