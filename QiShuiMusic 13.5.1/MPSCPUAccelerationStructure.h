@interface MPSCPUAccelerationStructure : NSObject
- (void)dealloc;
- (unsigned long long)branchingFactor;
- (void)rebuildWithDescriptor:;
- (id)bvh;
@end
