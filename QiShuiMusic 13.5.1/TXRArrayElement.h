@interface TXRArrayElement : NSObject
@property (nonatomic) NSArray faces;
- (id)faces;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initAsLevel:element:cubemap:dataSourceProvider:;
- (id)initAsLevel:element:dimensions:pixelFormat:alphaInfo:cubemap:bufferAllocator:;
- (void)setImage:atFace:;
@end
