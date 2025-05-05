@interface BPSSlidingWindowAssigner : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)assignWindow:input:;
- (id)initWithInterval:slide:aggregator:;
- (id)initWithInterval:slide:timestamp:aggregator:;
- (id)assignWindowOverlappingIntervals:timestamp:;
- (id)assignWindowNonOverlappingIntervals:timestamp:;
@end
