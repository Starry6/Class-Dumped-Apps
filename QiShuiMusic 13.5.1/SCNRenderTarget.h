@interface SCNRenderTarget : NSObject
@property (nonatomic) @ texture;
@property (nonatomic) NSString name;
@property (nonatomic) q referenceCount;
@property (nonatomic) q timeStamp;
@property (nonatomic) BOOL viewportDependant;
@property (nonatomic) C renderBufferFormat;
- (id)texture;
- (void)dealloc;
- (void)setName:;
- (void)setTexture:;
- (id)description;
- (long long)timeStamp;
- (id)name;
- (void)setTimeStamp:;
- (id)ciImage;
- (long long)referenceCount;
- (id)initWithDescription:size:arrayLength:;
- (BOOL)viewportDependant;
- (unsigned char)renderBufferFormat;
- (BOOL)matchesDescription:size:arrayLength:;
- (id)textureForSliceIndex:;
- (void)setReferenceCount:;
@end
