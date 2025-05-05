@interface BDADetailWebViewInitParams : NSObject
@property (nonatomic) NSString adID;
@property (nonatomic) NSString logExtra;
@property (nonatomic) NSString skAdNetworkParams;
@property (nonatomic) Q offlineType;
@property (nonatomic) BOOL disableCustomUserAgent;
@property (nonatomic) BOOL disableAd;
- (void)setOfflineType:;
- (id)adID;
- (BOOL)disableAd;
- (BOOL)disableCustomUserAgent;
- (id)logExtra;
- (unsigned long long)offlineType;
- (void)setAdID:;
- (void)setDisableAd:;
- (void)setDisableCustomUserAgent:;
- (void)setLogExtra:;
- (void)setSkAdNetworkParams:;
- (id)skAdNetworkParams;
- (void).cxx_destruct;
@end
