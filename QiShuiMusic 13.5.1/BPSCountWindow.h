@interface BPSCountWindow : BPSWindow
@property (nonatomic) Q capacity;
@property (nonatomic) Q currentCount;
@property (nonatomic) @ accumulator;
@property (nonatomic) @? closure;
- (unsigned long long)capacity;
- (unsigned long long)currentCount;
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
- (id)initWithCapacity:aggregator:identifier:;
@end
