@interface BPSTimer : BPSPublisher
@property (nonatomic) <BPSPublisher> upstream;
@property (nonatomic) double interval;
@property (nonatomic) @? getTimestamp;
- (id)upstream;
- (void)subscribe:;
- (void).cxx_destruct;
- (id)getTimestamp;
- (double)interval;
- (id)initWithUpstream:interval:getTimestamp:;
@end
