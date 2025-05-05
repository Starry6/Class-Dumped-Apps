@interface GLTFTexture : NSObject
@property (nonatomic) GLTFTextureSampler sampler;
@property (nonatomic) GLTFImage source;
- (id)initWithSource:;
- (id)init;
- (id)sampler;
- (void).cxx_destruct;
- (id)source;
- (void)setSampler:;
- (void)setSource:;
@end
