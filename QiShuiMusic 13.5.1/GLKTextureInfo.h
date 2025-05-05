@interface GLKTextureInfo : NSObject
@property (nonatomic) I name;
@property (nonatomic) I target;
@property (nonatomic) I width;
@property (nonatomic) I height;
@property (nonatomic) I depth;
@property (nonatomic) NSInteger alphaState;
@property (nonatomic) NSInteger textureOrigin;
@property (nonatomic) BOOL containsMipmaps;
@property (nonatomic) I mimapLevelCount;
@property (nonatomic) I arrayLength;
- (unsigned int)arrayLength;
- (unsigned int)depth;
- (void)dealloc;
- (unsigned int)height;
- (unsigned int)width;
- (unsigned int)target;
- (id)description;
- (unsigned int)name;
- (id)copyWithZone:;
- (BOOL)lossyCompressedSource;
- (id)initWithTexture:textureName:;
- (id)initWithTextureTXR:textureName:;
- (int)alphaState;
- (int)textureOrigin;
- (BOOL)containsMipmaps;
- (unsigned int)mimapLevelCount;
@end
