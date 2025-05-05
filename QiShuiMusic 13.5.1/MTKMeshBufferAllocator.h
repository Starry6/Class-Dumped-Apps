@interface MTKMeshBufferAllocator : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)initWithDevice:;
- (BOOL)isEqual:;
- (id)device;
- (id)newZone:;
- (id)newZoneForBuffersWithSize:andType:;
- (id)newBuffer:type:;
- (id)newBufferWithData:type:;
- (id)newBufferFromZone:length:type:;
- (id)newBufferFromZone:data:type:;
@end
