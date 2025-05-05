@interface MLCDeviceGPUHeapAllocator : NSObject
@property (nonatomic) BOOL isDebuggingEnabled;
@property (nonatomic) Q resourceOffset;
@property (nonatomic) <MTLHeap> heap;
@property (nonatomic) Q heapSize;
@property (nonatomic) Q resourceSize;
@property (nonatomic) Q numResources;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (unsigned long long)resourceSize;
- (id)imageForCommandBuffer:imageDescriptor:kernel:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)heap;
- (void)setIsDebuggingEnabled:;
- (BOOL)isDebuggingEnabled;
- (id)imageBatchForCommandBuffer:imageDescriptor:kernel:count:;
- (id)allocateBuffer:;
- (id)initWithDevice:heapSize:resourceSize:numResources:;
- (unsigned long long)heapSize;
- (unsigned long long)resourceOffset;
- (void)setResourceOffset:;
- (unsigned long long)numResources;
+ (BOOL)supportsSecureCoding;
@end
