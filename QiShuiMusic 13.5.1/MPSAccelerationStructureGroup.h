@interface MPSAccelerationStructureGroup : NSObject
@property (nonatomic) <MTLDevice> device;
- (void)dealloc;
- (id)initWithDevice:;
- (id)device;
- (id)bvhGroup;
- (id)initWithDevice:storageMode:;
@end
