@interface MDLMeshBufferAllocatorDefault : NSObject
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
@end
