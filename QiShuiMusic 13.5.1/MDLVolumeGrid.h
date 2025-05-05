@interface MDLVolumeGrid : NSObject
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithObject:divisions:;
- (id)initWithAsset:divisions:;
- (id)initWithAsset:divisions:interiorWidth:exteriorWidth:patchRadius:;
- (id)meshWithStyle:;
- (id)trianglesIntersectingRayWithOrigin:direction:count:;
@end
