@interface MDLMeshBufferViewAllocator : MDLBufferViewAllocator
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)newZone:;
- (id)newZoneForBuffersWithSize:andType:;
- (id)newBuffer:type:;
- (id)newBufferWithData:type:;
- (id)newBufferFromZone:length:type:;
- (id)newBufferFromZone:data:type:;
- (id)newBufferViewAtRegionIndex:type:length:offset:;
- (id)newBufferViewAtRegionIndex:type:;
- (void)encodeMeshBuffer:withCoder:forKey:;
- (void)encodeMeshBuffers:withCoder:forKey:;
- (id)decodeMeshBuffersWithCoder:forKey:;
- (id)decodeMeshBufferWithCoder:forKey:;
@end
