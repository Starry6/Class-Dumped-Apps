@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection
- (void)dealloc;
- (id)arguments;
- (id)formattedDescription:;
- (id)builtInArguments;
- (id)usageFlags;
- (id)pluginReturnData;
- (id)description;
- (id)performanceStatistics;
- (id)bindings;
- (id)initWithSerializedData:serializedStageInputDescriptor:device:options:flags:;
- (id)initWithSerializedData:device:options:flags:;
- (void)setPerformanceStatistics:;
- (unsigned int)traceBufferIndex;
- (id)constantSamplerUniqueIdentifiers;
- (id)constantSamplerDescriptors;
- (void)setConstantSamplerUniqueIdentifiers:;
- (void)setConstantSamplerDescriptorsFromBitmasks:count:;
@end
