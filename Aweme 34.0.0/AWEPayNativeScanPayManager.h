@interface AWEPayNativeScanPayManager : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) NSDictionary prePayInfoDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onResponse:;
- (void)beforeNativeScanPay;
- (void)p_trackEvent:param:;
- (void)handleWithCodeAddressInfoStr:;
- (void)afterNativeScanPay;
- (id)getPrepayInfoDicWithAddressStr:;
- (void)setPrePayInfoDic:;
- (id)prePayInfoDic;
- (void)scanPayWithCodeUrl:token:;
- (void).cxx_destruct;
- (void)setToken:;
- (id)token;
+ (id)defaultManager;
@end
