@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest
@property (nonatomic) NSString secondaryAuthToken;
@property (nonatomic) NSString heartbeatToken;
- (id)urlString;
- (id)heartbeatToken;
- (void)setSecondaryAuthToken:;
- (id)urlRequest;
- (BOOL)forceGSToken;
- (void).cxx_destruct;
- (void)setHeartbeatToken:;
- (id)secondaryAuthToken;
+ (Class)responseClass;
@end
