@interface BPSFuture : BPSPublisher
@property (nonatomic) BPSSubscriberList downstreams;
@property (nonatomic) BPSFutureResult result;
- (id)result;
- (void)subscribe:;
- (id)downstreams;
- (void).cxx_destruct;
- (void)setDownstreams:;
- (void)setResult:;
- (void)disassociate:;
- (id)initWithAttemptToFulfill:;
@end
