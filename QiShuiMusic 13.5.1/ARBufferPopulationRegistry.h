@interface ARBufferPopulationRegistry : NSObject
@property (nonatomic) Q count;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (unsigned long long)countWithLabel:;
- (id)labelForBufferWithSurfaceID:;
- (void)registerBufferWithSurfaceID:label:signpostType:timestamp:;
- (int)signpostTypeForLabel:;
- (double)timestampForSurfaceID:;
- (id)surfaceIDsForBuffersWithLabel:;
- (void)unregisterBufferWithSurfaceID:;
@end
