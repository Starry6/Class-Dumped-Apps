@interface MTKMeshBufferZone : NSObject
@property (nonatomic) Q capacity;
@property (nonatomic) <MDLMeshBufferAllocator> allocator;
@property (nonatomic) <MTLBuffer> buffer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)capacity;
- (id)buffer;
- (void).cxx_destruct;
- (id)allocator;
- (id)initWithCapacity:allocator:;
- (id)newBufferWithLength:type:;
- (void)destroyBuffer:;
@end
