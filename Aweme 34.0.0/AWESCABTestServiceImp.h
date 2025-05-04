@interface AWESCABTestServiceImp : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)abValueForKey:;
- (id)clientABvalueForKey:exposure:;
+ (void)_aweLazyRegisterLoad;
+ (void)registerEnableOnlySupportXsgClientABTest;
+ (void)registerEnableScreenCastClarityLimitABTest;
+ (void)registerNewEnableOnlySupportXsgClientABTest;
+ (void)registerLocalNetworkAlertStyle;
+ (void)registerScreenCastConnectError;
+ (void)registerUseNewFeedback;
+ (void)registerRequestRedirectURL;
+ (void)registerCastProxyConfig;
@end
