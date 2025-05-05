@interface MDLMeshBufferZoneDefault : NSObject
@property (nonatomic) Q capacity;
@property (nonatomic) <MDLMeshBufferAllocator> allocator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)capacity;
- (void).cxx_destruct;
- (id)allocator;
- (id)initWithCapacity:allocator:;
- (BOOL)reserveMemory:allocator:;
- (void)cancelMemory:;
@end
