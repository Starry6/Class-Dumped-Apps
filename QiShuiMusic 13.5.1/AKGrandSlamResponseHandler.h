@interface AKGrandSlamResponseHandler : NSObject
@property (nonatomic) AKAppleIDAuthenticationContext context;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
- (void)handleResponseError:;
- (void)_handleInvalidMasterTokenWithSubErrorCode:;
- (void)_revokeDeviceTrust;
@end
