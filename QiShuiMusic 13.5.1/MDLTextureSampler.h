@interface MDLTextureSampler : NSObject
@property (nonatomic) Q mappingChannel;
@property (nonatomic) q textureComponents;
@property (nonatomic) MDLTexture texture;
@property (nonatomic) MDLTextureFilter hardwareFilter;
@property (nonatomic) MDLTransform transform;
- (id)texture;
- (id)init;
- (void)setTransform:;
- (void)setTexture:;
- (id)transform;
- (void).cxx_destruct;
- (id)hardwareFilter;
- (void)setHardwareFilter:;
- (unsigned long long)mappingChannel;
- (void)setMappingChannel:;
- (long long)textureComponents;
- (void)setTextureComponents:;
@end
