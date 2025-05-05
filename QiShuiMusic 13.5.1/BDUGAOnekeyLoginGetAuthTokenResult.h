@interface BDUGAOnekeyLoginGetAuthTokenResult : NSObject
@property (nonatomic) Q carrierType;
@property (nonatomic) NSString from;
@property (nonatomic) NSString providerAppID;
@property (nonatomic) NSString token;
@property (nonatomic) NSString gwAuth;
@property (nonatomic) NSDictionary passportRequestParams;
- (void)setCarrierType:;
- (unsigned long long)carrierType;
- (id)gwAuth;
- (id)passportRequestParams;
- (id)providerAppID;
- (void)setGwAuth:;
- (void)setPassportRequestParams:;
- (void)setProviderAppID:;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
- (id)from;
- (void)setFrom:;
@end
