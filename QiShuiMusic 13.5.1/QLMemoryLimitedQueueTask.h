@interface QLMemoryLimitedQueueTask : NSObject
@property (nonatomic) Q expectedMemoryConsumption;
@property (nonatomic) @? block;
- (id)block;
- (void).cxx_destruct;
- (id)initWithBlock:expectedMemoryConsumption:;
- (unsigned long long)expectedMemoryConsumption;
@end
