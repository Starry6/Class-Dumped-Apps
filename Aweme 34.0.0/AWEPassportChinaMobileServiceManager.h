@interface AWEPassportChinaMobileServiceManager : NSObject
@property (nonatomic) BOOL didRegisterSDK;
@property (nonatomic) double timeout;
@property (nonatomic) NSString appID;
@property (nonatomic) NSString appKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAppKey:;
- (id)appKey;
- (void)registerChinaMobileService;
- (void)registerChinaMobileServiceWithCarrierType:;
- (BOOL)didRegisterSDK;
- (void)setDidRegisterSDK:;
- (BOOL)isAvailableWithCarrierType:;
- (void)_requestTokenWithCompletion:;
- (void)registerWithAppID:appKey:timeout:;
- (void)requestSecurityPhoneNumber:timeout:;
- (void)requestTokenDictionary:;
- (void)requestMobileAuth:;
- (id)carrierAppId;
- (id)_simulatorUnsupportError;
- (BOOL)isAvailable;
- (double)timeout;
- (id)appID;
- (void)setTimeout:;
- (void)setAppID:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
