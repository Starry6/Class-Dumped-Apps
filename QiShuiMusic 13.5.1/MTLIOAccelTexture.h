@interface MTLIOAccelTexture : MTLIOAccelResource
@property (nonatomic) Q uniqueIdentifier;
@property (nonatomic) <MTLResource> rootResource;
@property (nonatomic) <MTLTexture> parentTexture;
@property (nonatomic) Q parentRelativeLevel;
@property (nonatomic) Q parentRelativeSlice;
@property (nonatomic) <MTLBuffer> buffer;
@property (nonatomic) Q bufferOffset;
@property (nonatomic) Q bufferBytesPerRow;
@property (nonatomic) ^{__IOSurface=} iosurface;
@property (nonatomic) Q iosurfacePlane;
@property (nonatomic) Q allocatedSize;
@property (nonatomic) Q rotation;
@property (nonatomic) {?=CCCC} swizzle;
@property (nonatomic) I swizzleKey;
@property (nonatomic) BOOL isCompressed;
@property (nonatomic) q compressionFeedback;
@property (nonatomic) Q textureType;
@property (nonatomic) Q pixelFormat;
@property (nonatomic) Q usage;
@property (nonatomic) Q width;
@property (nonatomic) Q height;
@property (nonatomic) Q depth;
@property (nonatomic) Q mipmapLevelCount;
@property (nonatomic) Q sampleCount;
@property (nonatomic) Q arrayLength;
@property (nonatomic) Q numFaces;
@property (nonatomic) BOOL shareable;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) BOOL isDrawable;
@property (nonatomic) BOOL rootResourceIsSuballocatedBuffer;
@property (nonatomic) BOOL allowGPUOptimizedContents;
@property (nonatomic) {MTLResourceID=Q} gpuResourceID;
- (unsigned long long)arrayLength;
- (unsigned long long)sampleCount;
- (unsigned int)swizzleKey;
- (unsigned long long)mipmapLevelCount;
- (unsigned long long)numFaces;
- (id)swizzle;
- (unsigned long long)hazardTrackingMode;
- (BOOL)allowGPUOptimizedContents;
- (unsigned long long)depth;
- (BOOL)isDrawable;
- (unsigned long long)textureType;
- (unsigned long long)usage;
- (id)gpuResourceID;
- (unsigned long long)allocatedSize;
- (id)initWithTexture:pixelFormat:textureType:levels:slices:;
- (unsigned long long)gpuHandle;
- (id)copyAnnotations;
- (void)dealloc;
- (id)buffer;
- (unsigned long long)uniqueIdentifier;
- (id)formattedDescription:;
- (unsigned long long)iosurfacePlane;
- (BOOL)isAliasable;
- (id)initWithBuffer:descriptor:offset:bytesPerRow:;
- (unsigned long long)parentRelativeLevel;
- (id)initWithTextureInternal:pixelFormat:textureType:levels:slices:swizzle:compressedView:;
- (BOOL)isFramebufferOnly;
- (id)initWithTexture:pixelFormat:;
- (BOOL)isCompressed;
- (long long)compressionFeedback;
- (id)initWithDevice:descriptor:sysMemSize:sysMemRowBytes:vidMemSize:vidMemRowBytes:args:argsSize:;
- (id)newSharedTextureHandle;
- (void)makeAliasable;
- (id)rootResource;
- (unsigned long long)height;
- (id)initWithHeap:resource:offset:length:device:descriptor:;
- (id)initWithTexture:pixelFormat:textureType:levels:slices:swizzle:;
- (unsigned long long)parentRelativeSlice;
- (unsigned long long)width;
- (id)initWithDevice:descriptor:sysMemPointer:sysMemSize:sysMemLength:sysMemRowBytes:args:argsSize:deallocator:;
- (unsigned long long)bufferBytesPerRow;
- (BOOL)rootResourceIsSuballocatedBuffer;
- (id)iosurface;
- (BOOL)isSparse;
- (unsigned long long)pixelFormat;
- (id)initWithBuffer:descriptor:sysMemOffset:sysMemRowBytes:vidMemSize:vidMemRowBytes:args:argsSize:;
- (id)description;
- (id)initWithDevice:descriptor:iosurface:plane:field:args:argsSize:;
- (void)copyFromPixels:rowBytes:imageBytes:toSlice:mipmapLevel:origin:size:;
- (unsigned long long)rotation;
- (void)copyFromSlice:mipmapLevel:origin:size:toPixels:rowBytes:imageBytes:;
- (void)replaceRegion:mipmapLevel:withBytes:bytesPerRow:;
- (id)initWithBuffer:descriptor:sysMemOffset:sysMemRowBytes:vidMemSize:vidMemRowBytes:args:argsSize:isStrideTexture:;
- (unsigned long long)bufferOffset;
- (BOOL)isShareable;
- (void)getBytes:bytesPerRow:fromRegion:mipmapLevel:;
- (id)initWithCompressedTexture:pixelFormat:textureType:level:slice:;
- (id)parentTexture;
- (id)initWithMasterBuffer:heapIndex:bufferIndex:bufferOffset:length:descriptor:sysMemRowBytes:vidMemSize:vidMemRowBytes:args:argsSize:;
+ (void)initNewTextureDataWithDevice:descriptor:sysMemSize:sysMemRowBytes:vidMemSize:vidMemRowBytes:args:;
@end
