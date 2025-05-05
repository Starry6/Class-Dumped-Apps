@interface BPSSessionWindow : BPSWindow
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) double gap;
@property (nonatomic) @ accumulator;
@property (nonatomic) @? closure;
- (id)dateInterval;
- (void)cancel;
- (double)gap;
- (void)requestDemand:;
- (void)receiveSubscription:;
- (id)metadata;
- (long long)receiveInput:;
- (id)identifier;
- (void)receiveCompletion:;
- (id)closure;
- (id)accumulator;
- (void).cxx_destruct;
- (id)initWithDateInterval:gap:timestamp:aggregator:identifier:;
@end
