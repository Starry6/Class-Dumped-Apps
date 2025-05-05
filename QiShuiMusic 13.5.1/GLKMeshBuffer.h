@interface GLKMeshBuffer : NSObject
@property (nonatomic) Q length;
@property (nonatomic) GLKMeshBufferAllocator allocator;
@property (nonatomic) I glBufferName;
@property (nonatomic) Q offset;
@property (nonatomic) <MDLMeshBufferZone> zone;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)zone;
- (void)dealloc;
- (unsigned long long)offset;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)map;
- (unsigned long long)length;
- (id)allocator;
- (id)copyWithZone:;
- (void)fillData:offset:;
- (id)_initWithLength:offset:zone:type:;
- (id)_initWithLength:allocator:type:;
- (id)_initWithData:allocator:type:;
- (id)_initWithBytes:length:offset:allocator:zone:type:;
- (unsigned int)glBufferName;
@end
