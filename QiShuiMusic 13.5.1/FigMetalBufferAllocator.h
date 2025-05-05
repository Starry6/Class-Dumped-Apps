@interface FigMetalBufferAllocator : NSObject
@property (nonatomic) Q alignment;
@property (nonatomic) Q memSize;
@property (nonatomic) FigMetalUtils utils;
- (id)newTextureWithDescriptor:offset:;
- (void).cxx_destruct;
- (void)purgeResources;
- (id)description;
- (unsigned long long)alignment;
- (unsigned long long)memSize;
- (int)setupWithDescriptor:;
- (id)utils;
- (id)initWithMetalUtils:;
- (id)getSizeAndAlignForDescriptor:;
- (id)getSizeAndAlignForBufferDescriptor:;
- (id)newBufferWithDescriptor:offset:;
- (unsigned long long)textureOffset:;
- (unsigned long long)bufferOffset:;
- (BOOL)hasCreatedTexture:;
- (BOOL)hasCreatedBuffer:;
@end
