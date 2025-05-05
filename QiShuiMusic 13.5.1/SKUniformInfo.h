@interface SKUniformInfo : NSObject
@property (nonatomic) Q seed;
@property (nonatomic) Q textureTarget;
@property (nonatomic) SKUniform uniform;
- (unsigned long long)seed;
- (id)init;
- (void).cxx_destruct;
- (void)setSeed:;
- (unsigned long long)textureTarget;
- (void)setTextureTarget:;
- (id)uniform;
- (void)setUniform:;
@end
