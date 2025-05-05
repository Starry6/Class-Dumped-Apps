@interface BMDSLSubscribeOn : BPSPublisher
@property (nonatomic) BMDSL upstream;
@property (nonatomic) <BMDSLScheduler> scheduler;
- (id)upstream;
- (id)scheduler;
- (void)subscribe:;
- (id)initWithUpstream:scheduler:;
- (void).cxx_destruct;
@end
