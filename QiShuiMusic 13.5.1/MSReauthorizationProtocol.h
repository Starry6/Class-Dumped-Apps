@interface MSReauthorizationProtocol : MSStreamsProtocol
- (void)abort;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithPersonID:baseURL:;
- (void)_coreProtocolDidFinishResponse:error:;
- (void)_coreProtocolDidFailAuthenticationError:;
- (void)requestReauthorizationForAssets:;
@end
