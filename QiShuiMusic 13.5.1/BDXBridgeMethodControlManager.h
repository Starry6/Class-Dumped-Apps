@interface BDXBridgeMethodControlManager : NSObject
@property (nonatomic) NSDictionary methodTracking;
@property (nonatomic) BDXBridgeAuthFeAuthConfig authConfig;
@property (nonatomic) NSString verifyUrl;
@property (nonatomic) NSString sourceUrl;
- (id)initWithMethodControlLimitInfo:;
- (long long)isControlledMethod:forURL:type:;
- (id)authConfig;
- (id)checkMethodRequestParamsWithInfo:;
- (long long)getAuthResultFromRequestCheckResult:;
- (long long)getAuthTypeForMethodNameFromConfig:enableForcePrivate:publicMethods:secureMethods:;
- (id)getReportInfoFromRequestCheckResult:;
- (id)initWithAuthConfig:;
- (long long)isAuthorizedToCallMethod:methodAccessType:;
- (id)methodTracking;
- (void)setAuthConfig:;
- (void)setMethodTracking:;
- (void)setVerifyUrl:;
- (id)verifyUrl;
- (void).cxx_destruct;
- (id)sourceUrl;
- (void)setSourceUrl:;
@end
