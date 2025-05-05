@interface MDLMeshBufferData : NSObject
@property (nonatomic) NSData data;
@property (nonatomic) Q length;
@property (nonatomic) <MDLMeshBufferAllocator> allocator;
@property (nonatomic) <MDLMeshBufferZone> zone;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)zone;
- (void)dealloc;
- (void)setName:;
- (id)data;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)map;
- (unsigned long long)length;
- (id)allocator;
- (id)name;
- (id)initWithType:data:;
- (id)copyWithZone:;
- (void)fillData:offset:;
- (id)initWithType:length:;
- (id)initWithLength:data:allocator:zone:;
@end
