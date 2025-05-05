@interface CUINamedTexture : CUINamedLookup
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) double scale;
@property (nonatomic) NSInteger exifOrientation;
@property (nonatomic) BOOL isOpaque;
@property (nonatomic) BOOL isAlphaCropped;
- (int)exifOrientation;
- (BOOL)isOpaque;
- (id)description;
- (double)scale;
- (id)alphaCroppedRect;
- (id)size;
- (BOOL)_cacheRenditionProperties;
- (id)textureWithBufferAllocator:;
- (BOOL)isAlphaCropped;
@end
