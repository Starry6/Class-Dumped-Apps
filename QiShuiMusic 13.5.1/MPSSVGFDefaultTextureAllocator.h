@interface MPSSVGFDefaultTextureAllocator : NSObject
@property (nonatomic) <MTLDevice> device;
@property (nonatomic) Q allocatedTextureCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)reset;
- (id)initWithDevice:;
- (id)device;
- (id)textureWithPixelFormat:width:height:;
- (void)returnTexture:;
- (unsigned long long)allocatedTextureCount;
@end
