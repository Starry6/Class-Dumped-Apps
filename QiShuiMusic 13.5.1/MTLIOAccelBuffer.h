@interface MTLIOAccelBuffer : MTLIOAccelResource
@property (nonatomic) Q length;
@property (nonatomic) ^v contents;
@property (nonatomic) ^{__IOSurface=} iosurface;
@property (nonatomic) Q allocatedSize;
- (id)_aneIOSurface;
- (id)initWithHeap:resource:offset:length:;
- (unsigned long long)allocatedSize;
- (void)addDebugMarker:range:;
- (void)removeAllDebugMarkers;
- (id)copyAnnotations;
- (void)dealloc;
- (id)formattedDescription:;
- (id)contents;
- (id)initWithDevice:iosurface:args:argsSize:;
- (id)initWithDevice:pointer:length:options:sysMemSize:vidMemSize:args:argsSize:deallocator:;
- (id)newLinearTextureWithDescriptor:offset:bytesPerRow:bytesPerImage:;
- (id)iosurface;
- (id)description;
- (unsigned long long)length;
- (void)didModifyRange:;
- (id)initWithDevice:pointer:length:options:sysMemSize:vidMemSize:gpuAddress:args:argsSize:deallocator:;
- (id)initWithMasterBuffer:heapIndex:bufferIndex:bufferOffset:length:args:argsSize:;
@end
