@interface MSResetServerProtocol : MSStreamsProtocol
- (void)abort;
- (void)dealloc;
- (void)setDelegate:;
- (void)resetServerState;
- (id)delegate;
- (id)initWithPersonID:baseURL:;
- (void)_coreProtocolDidFailAuthenticationError:;
- (void)_coreProtocolDidFinishError:;
@end
