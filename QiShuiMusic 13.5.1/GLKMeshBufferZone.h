@interface GLKMeshBufferZone : NSObject
@property (nonatomic) Q capacity;
@property (nonatomic) <MDLMeshBufferAllocator> allocator;
@property (nonatomic) I glBufferName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)capacity;
- (void)dealloc;
- (void).cxx_destruct;
- (id)allocator;
- (id)initWithCapacity:allocator:;
- (id)newBufferWithLength:type:;
- (void)destroyBuffer:;
- (unsigned int)glBufferName;
@end
