@interface BPSDebounce : BPSPublisher
@property (nonatomic) <BPSPublisher> upstream;
@property (nonatomic) double dueTime;
@property (nonatomic) @? getTimestamp;
- (id)upstream;
- (void)subscribe:;
- (void).cxx_destruct;
- (id)getTimestamp;
- (double)dueTime;
- (id)initWithUpstream:for:getTimestamp:;
@end
