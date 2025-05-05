@interface CJPayDYPayBizDeskModel : NSObject
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) BOOL isPaymentOuterApp;
@property (nonatomic) BOOL isUseMask;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString appId;
@property (nonatomic) NSString responseStr;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) BOOL isSignAndPay;
- (void)setResponseStr:;
- (BOOL)isColdLaunch;
- (BOOL)isPaymentOuterApp;
- (BOOL)isSignAndPay;
- (BOOL)isUseMask;
- (id)responseStr;
- (void)setIsColdLaunch:;
- (void)setIsPaymentOuterApp:;
- (void)setIsSignAndPay:;
- (void)setIsUseMask:;
- (id)appId;
- (void)setLastTimestamp:;
- (void)setAppId:;
- (void)setAppName:;
- (id)appName;
- (void).cxx_destruct;
- (double)lastTimestamp;
@end
