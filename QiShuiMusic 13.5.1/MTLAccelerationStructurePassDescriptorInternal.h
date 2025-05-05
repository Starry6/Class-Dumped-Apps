@interface MTLAccelerationStructurePassDescriptorInternal : MTLAccelerationStructurePassDescriptor
@property (nonatomic) BOOL enableSubstreams;
- (id)init;
- (BOOL)enableSubstreams;
- (void)setEnableSubstreams:;
@end
