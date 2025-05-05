@interface SASProximitySessionSharingTransport : SASProximitySessionTransport
@property (nonatomic) CUMessageSession messageSession;
@property (nonatomic) CUMessageSession actionMessageSession;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (id)messageSession;
- (void)setMessageSession:;
- (id)initWithMessageSession:;
- (void)sendData:response:;
- (id)actionMessageSession;
- (void)setActionMessageSession:;
@end
