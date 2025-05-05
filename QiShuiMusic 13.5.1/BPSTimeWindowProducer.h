@interface BPSTimeWindowProducer : BPSWindow
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) @ accumulator;
@property (nonatomic) @? closure;
- (id)dateInterval;
- (void)cancel;
- (void)requestDemand:;
- (void)receiveSubscription:;
- (id)metadata;
- (long long)receiveInput:;
- (id)identifier;
- (void)receiveCompletion:;
- (id)closure;
- (id)accumulator;
- (void).cxx_destruct;
- (id)initWithDateInterval:aggregator:identifier:;
@end
