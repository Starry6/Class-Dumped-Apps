@interface SCNMTLShadable : NSObject
@property (nonatomic) q materialModificationCount;
@property (nonatomic) q geometryModificationCount;
- (void)dealloc;
- (void)setResource:ofType:atIndices:;
- (id)bufferAtIndices:;
- (id)textureAtIndices:;
- (id)samplerAtIndices:;
- (long long)materialModificationCount;
- (void)setMaterialModificationCount:;
- (long long)geometryModificationCount;
- (void)setGeometryModificationCount:;
@end
