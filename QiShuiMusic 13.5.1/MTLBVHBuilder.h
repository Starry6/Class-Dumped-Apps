@interface MTLBVHBuilder : NSObject
- (id)init;
- (void)getCapacitiesForDescriptor:fragmentCapacity:innerNodeCapacity:leafNodeCapacity:;
- (void)getCapacitiesForDescriptor:fragmentCapacity:innerNodeCapacity:leafNodeCapacity:primitiveDataCapacity:;
@end
