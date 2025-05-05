@interface TXRDeferredTextureInfo : NSObject
@property (nonatomic) TXRTextureInfo info;
@property (nonatomic) NSMutableArray mipmaps;
- (void)setInfo:;
- (void).cxx_destruct;
- (id)info;
- (id)mipmaps;
- (id)initWithMipmapLevelCount:arrayLength:cubemap:;
@end
