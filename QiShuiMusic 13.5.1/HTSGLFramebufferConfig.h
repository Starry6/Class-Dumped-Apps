@interface HTSGLFramebufferConfig : NSObject
@property (nonatomic) {CGSize=dd} framebufferSize;
@property (nonatomic) BOOL onlyTexture;
@property (nonatomic) BOOL disableCache;
@property (nonatomic) HTSGLContext context;
@property (nonatomic) Q color;
@property (nonatomic) BOOL useRectangle;
- (id)framebufferSize;
- (void)setOnlyTexture:;
- (BOOL)onlyTexture;
- (void)setFramebufferSize:;
- (void)setUseRectangle:;
- (BOOL)useRectangle;
- (id)init;
- (id)context;
- (id)copy;
- (void)setColor:;
- (BOOL)disableCache;
- (unsigned long long)color;
- (void).cxx_destruct;
- (void)setDisableCache:;
- (void)setContext:;
- (id)copyWithZone:;
@end
