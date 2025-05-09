@interface FigMetalTextureStub : NSObject
@property (nonatomic) NSString label;
@property (nonatomic) Q offset;
@property (nonatomic) Q width;
@property (nonatomic) Q height;
@property (nonatomic) Q pixelFormat;
@property (nonatomic) Q usage;
@property (nonatomic) <MTLResource> rootResource;
@property (nonatomic) <MTLTexture> parentTexture;
@property (nonatomic) Q parentRelativeLevel;
@property (nonatomic) Q parentRelativeSlice;
@property (nonatomic) <MTLBuffer> buffer;
@property (nonatomic) Q bufferOffset;
@property (nonatomic) Q bufferBytesPerRow;
@property (nonatomic) ^{__IOSurface=} iosurface;
@property (nonatomic) Q iosurfacePlane;
@property (nonatomic) Q textureType;
@property (nonatomic) Q depth;
@property (nonatomic) Q mipmapLevelCount;
@property (nonatomic) Q sampleCount;
@property (nonatomic) Q arrayLength;
@property (nonatomic) BOOL shareable;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic) Q firstMipmapInTail;
@property (nonatomic) Q tailSizeInBytes;
@property (nonatomic) BOOL isSparse;
@property (nonatomic) BOOL allowGPUOptimizedContents;
@property (nonatomic) q compressionType;
@property (nonatomic) {MTLResourceID=Q} gpuResourceID;
@property (nonatomic) {?=CCCC} swizzle;
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) Q cpuCacheMode;
@property (nonatomic) Q storageMode;
@property (nonatomic) Q hazardTrackingMode;
@property (nonatomic) Q resourceOptions;
@property (nonatomic) <MTLHeap> heap;
@property (nonatomic) Q heapOffset;
@property (nonatomic) Q allocatedSize;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)arrayLength;
- (unsigned long long)sampleCount;
- (unsigned long long)mipmapLevelCount;
- (unsigned long long)depth;
- (unsigned long long)textureType;
- (unsigned long long)usage;
- (void)setOffset:;
- (id)initWithDescriptor:;
- (void)setPixelFormat:;
- (void)setWidth:;
- (void)setLabel:;
- (id)label;
- (unsigned long long)offset;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (void)setUsage:;
- (unsigned long long)pixelFormat;
@end
