@interface BDLLightLocationResult : NSObject
@property (nonatomic) q status;
@property (nonatomic) NSDictionary lastLocationResult;
@property (nonatomic) NSString currentWifiResult;
@property (nonatomic) q accuracy;
@property (nonatomic) NSError error;
- (id)currentWifiResult;
- (id)initWithStatus:accuracy:locationResult:wifiResult:error:;
- (id)lastLocationResult;
- (void)setCurrentWifiResult:;
- (void)setLastLocationResult:;
- (void)setStatus:;
- (void)setError:;
- (id)error;
- (long long)accuracy;
- (void).cxx_destruct;
- (long long)status;
- (void)setAccuracy:;
@end
