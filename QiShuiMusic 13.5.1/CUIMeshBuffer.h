@interface CUIMeshBuffer : NSObject
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
- (void)dealloc;
- (unsigned long long)type;
- (id)map;
- (unsigned long long)length;
- (id)allocator;
- (id)copyWithZone:;
- (void)fillData:offset:;
- (id)initWithBytes:andLength:ofType:;
@end
