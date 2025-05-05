@interface MTLIOCommandQueueDescriptor : NSObject
@property (nonatomic) Q maxWorkerThreads;
@property (nonatomic) Q maxCommandBufferCount;
@property (nonatomic) q priority;
@property (nonatomic) q type;
@property (nonatomic) Q maxCommandsInFlight;
@property (nonatomic) <MTLIOScratchBufferAllocator> scratchBufferAllocator;
- (id)init;
- (void)setPriority:;
- (void)dealloc;
- (id)formattedDescription:;
- (void)setType:;
- (unsigned long long)hash;
- (void)setMaxCommandBufferCount:;
- (long long)type;
- (id)description;
- (unsigned long long)maxCommandBufferCount;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)priority;
- (id)scratchBufferAllocator;
- (void)setScratchBufferAllocator:;
- (unsigned long long)maxCommandsInFlight;
- (void)setMaxCommandsInFlight:;
- (unsigned long long)maxWorkerThreads;
- (void)setMaxWorkerThreads:;
@end
