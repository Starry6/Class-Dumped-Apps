@interface TXRMipmapLevel : NSObject
@property (nonatomic) NSArray elements;
- (id)elements;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initAsLevel:arrayLength:cubemap:dataSourceProvider:;
- (id)initAsLevel:dimensions:pixelFormat:alphaInfo:arrayLength:cubemap:bufferAllocator:;
- (void)setImage:atElement:atFace:;
@end
