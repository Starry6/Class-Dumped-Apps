@interface VEBitsRTTransUtil : NSObject
@property (nonatomic) VEMVPRenderer textureMvpRenderer;
@property (nonatomic) HTSGLContext context;
@property (nonatomic) HTSGLFramebuffer trans8bitRTFramebuffer;
@property (nonatomic) HTSGLFramebuffer trans10bitRTFramebuffer;
- (void)setTextureMvpRenderer:;
- (void)setTrans10bitRTFramebuffer:;
- (void)setTrans8bitRTFramebuffer:;
- (id)textureMvpRenderer;
- (id)trans10BitRT28Bit:;
- (id)trans10bitRTFramebuffer;
- (id)trans8BitRT210Bit:;
- (id)trans8bitRTFramebuffer;
- (id)init;
- (id)context;
- (void).cxx_destruct;
- (id)init:;
- (void)setContext:;
@end
