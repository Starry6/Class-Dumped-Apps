@interface AWEPassportChinaUnionServiceManager : NSObject
@property (nonatomic) double timeout;
@property (nonatomic) NSString appID;
@property (nonatomic) BOOL didRegisterSDK;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)didRegisterSDK;
- (void)setDidRegisterSDK:;
- (BOOL)isAvailableWithCarrierType:;
- (void)registerWithAppID:appKey:timeout:;
- (void)requestSecurityPhoneNumber:timeout:;
- (void)requestTokenDictionary:;
- (void)requestMobileAuth:;
- (id)carrierAppId;
- (void)registerChinaUnionService;
- (void)registerChinaUnionServiceWithCarrierType:;
- (BOOL)isAvailable;
- (double)timeout;
- (id)appID;
- (void)setTimeout:;
- (void)setAppID:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
