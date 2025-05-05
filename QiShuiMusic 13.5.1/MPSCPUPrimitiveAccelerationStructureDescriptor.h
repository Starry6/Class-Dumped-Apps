@interface MPSCPUPrimitiveAccelerationStructureDescriptor : MPSCPUAccelerationStructureDescriptor
@property (nonatomic) NSArray geometryDescriptors;
- (void)dealloc;
- (id)geometryDescriptors;
- (void)setGeometryDescriptors:;
@end
