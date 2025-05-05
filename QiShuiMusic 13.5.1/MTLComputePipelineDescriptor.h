@interface MTLComputePipelineDescriptor : NSObject
@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) Q resourceIndex;
@property (nonatomic) NSString label;
@property (nonatomic) <MTLFunction> computeFunction;
@property (nonatomic) BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth;
@property (nonatomic) Q maxTotalThreadsPerThreadgroup;
@property (nonatomic) MTLStageInputOutputDescriptor stageInputDescriptor;
@property (nonatomic) MTLPipelineBufferDescriptorArray buffers;
@property (nonatomic) BOOL supportIndirectCommandBuffers;
@property (nonatomic) NSArray insertLibraries;
@property (nonatomic) NSArray preloadedLibraries;
@property (nonatomic) NSArray binaryArchives;
@property (nonatomic) MTLLinkedFunctions linkedFunctions;
@property (nonatomic) BOOL supportAddingBinaryFunctions;
@property (nonatomic) Q maxCallStackDepth;
- (id)insertLibraries;
- (void)setInsertLibraries:;
- (void)reset;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
