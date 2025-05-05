@interface OspreyMescalSession : NSObject
- (id)signData:error:;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)handshakeRequestWithCertificateData:error:;
- (BOOL)completeWithHandshakeResponse:error:;
- (id)_exchangeData:error:;
@end
