@interface GLTFImage : NSObject
@property (nonatomic) ^{CGImage=} cachedImage;
@property (nonatomic) NSURL uri;
@property (nonatomic) GLTFBufferView bufferView;
@property (nonatomic) NSString mimeType;
- (id)bridgeCGImage;
- (id)bufferView;
- (id)initWithBufferView:mimeType:;
- (void)setBufferView:;
- (id)uri;
- (void)dealloc;
- (id)initWithURI:;
- (id)mimeType;
- (id)initWithCGImage:;
- (void).cxx_destruct;
- (void)setMimeType:;
- (void)setUri:;
- (id)cachedImage;
- (void)setCachedImage:;
- (id)newCGImage;
@end
