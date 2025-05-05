@interface MTLTileRenderPipelineDescriptor : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) <MTLFunction> tileFunction;
@property (nonatomic) Q rasterSampleCount;
@property (nonatomic) MTLTileRenderPipelineColorAttachmentDescriptorArray colorAttachments;
@property (nonatomic) BOOL threadgroupSizeMatchesTileSize;
@property (nonatomic) MTLPipelineBufferDescriptorArray tileBuffers;
@property (nonatomic) Q maxTotalThreadsPerThreadgroup;
@property (nonatomic) NSArray binaryArchives;
@property (nonatomic) NSArray preloadedLibraries;
@property (nonatomic) MTLLinkedFunctions linkedFunctions;
@property (nonatomic) BOOL supportAddingBinaryFunctions;
@property (nonatomic) Q maxCallStackDepth;
- (unsigned long long)maxCallStackDepth;
- (void)setPreloadedLibraries:;
- (BOOL)supportAddingBinaryFunctions;
- (void)setSupportAddingBinaryFunctions:;
- (void)reset;
- (void)setMaxCallStackDepth:;
- (id)copyWithZone:;
- (id)preloadedLibraries;
+ (id)allocWithZone:;
+ (id)alloc;
@end
