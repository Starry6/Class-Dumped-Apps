@interface GLTFTextureSampler : NSObject
@property (nonatomic) q magFilter;
@property (nonatomic) q minMipFilter;
@property (nonatomic) q wrapS;
@property (nonatomic) q wrapT;
- (long long)minMipFilter;
- (void)setMinMipFilter:;
- (id)init;
- (void)setMagFilter:;
- (long long)magFilter;
- (long long)wrapS;
- (long long)wrapT;
- (void)setWrapS:;
- (void)setWrapT:;
@end
