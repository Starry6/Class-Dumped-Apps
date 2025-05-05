@interface MDLMeshBufferView : MDLBufferView
@property (nonatomic) r^v data;
@property (nonatomic) Q length;
@property (nonatomic) <MDLMeshBufferAllocator> allocator;
@property (nonatomic) <MDLMeshBufferZone> zone;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)zone;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)map;
- (id)allocator;
- (id)copyWithZone:;
- (void)fillData:offset:;
- (id)initWithBufferViewNoCopy:type:;
@end
