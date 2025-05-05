@interface AKAppleIDSigningController : NSObject
@property (nonatomic) AKAppleIDAuthenticationController authenticationController;
@property (nonatomic) BOOL shouldSendAbsintheHeader;
@property (nonatomic) BOOL isProxy;
@property (nonatomic) NSString initialURLKey;
- (id)_connection;
- (id)init;
- (void)dealloc;
- (void)setShouldSendAbsintheHeader:;
- (id)authenticationController;
- (void)_connectionInterrupted;
- (BOOL)isProxy;
- (void).cxx_destruct;
- (id)initWithDaemonXPCEndpoint:;
- (void)_connectionInvalidated;
- (BOOL)shouldSendAbsintheHeader;
- (void)signaturesForData:options:completion:;
- (void)absintheSignatureForData:completion:;
- (void)attestationDataForRequest:completion:;
- (void)setIsProxy:;
- (id)initialURLKey;
- (void)setInitialURLKey:;
- (void)setAuthenticationController:;
- (void)signingHeadersForRequest:completion:;
- (void)signWithBAAHeaders:completion:;
- (void)_additionalAbsintheHeadersForRequest:completion:;
- (void)_additionalAttestationHeadersForRequest:options:completion:;
@end
