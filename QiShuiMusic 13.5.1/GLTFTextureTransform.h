@interface GLTFTextureTransform : NSObject
@property (nonatomic)  offset;
@property (nonatomic) float rotation;
@property (nonatomic)  scale;
@property (nonatomic) BOOL hasTexCoord;
@property (nonatomic) NSInteger texCoord;
@property (nonatomic) {?=[4]} matrix;
- (void)setHasTexCoord:;
- (BOOL)hasTexCoord;
- (void)setTexCoord:;
- (int)texCoord;
- (void)setOffset:;
- (id)init;
- (void)setScale:;
- (void)setRotation:;
- (id)offset;
- (float)rotation;
- (id)scale;
- (id)matrix;
@end
