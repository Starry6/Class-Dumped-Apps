@interface VCPSpillmapMetalSession : NSObject
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)configureGPU;
- (int)configureSession:setWidth:setHeight:;
- (id)loadTexture:withAttributes:forPlane:withCache:withFormat:;
- (int)calculateDrmSpillmapMetal:emitSpillmap:setLayout:;
@end
