@interface BPSThrottle : BPSPublisher
@property (nonatomic) <BPSPublisher> upstream;
@property (nonatomic) double interval;
@property (nonatomic) BOOL latest;
@property (nonatomic) @? getTimestamp;
- (id)upstream;
- (void)subscribe:;
- (void).cxx_destruct;
- (id)getTimestamp;
- (double)interval;
- (BOOL)latest;
- (id)initWithUpstream:interval:latest:getTimestamp:;
@end
