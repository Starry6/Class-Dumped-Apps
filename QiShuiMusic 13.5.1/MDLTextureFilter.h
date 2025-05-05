@interface MDLTextureFilter : NSObject
@property (nonatomic) Q sWrapMode;
@property (nonatomic) Q tWrapMode;
@property (nonatomic) Q rWrapMode;
@property (nonatomic) Q minFilter;
@property (nonatomic) Q magFilter;
@property (nonatomic) Q mipFilter;
- (id)init;
- (void)setMipFilter:;
- (unsigned long long)minFilter;
- (void)setMagFilter:;
- (unsigned long long)magFilter;
- (unsigned long long)mipFilter;
- (void)setMinFilter:;
- (unsigned long long)sWrapMode;
- (void)setSWrapMode:;
- (unsigned long long)tWrapMode;
- (void)setTWrapMode:;
- (unsigned long long)rWrapMode;
- (void)setRWrapMode:;
@end
