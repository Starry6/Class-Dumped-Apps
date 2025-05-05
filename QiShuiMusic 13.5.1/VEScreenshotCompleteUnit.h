@interface VEScreenshotCompleteUnit : NSObject
@property (nonatomic) HTSGLFramebuffer hdr2sdrFramebuffer;
@property (nonatomic) VEMVPRenderer textureMvpRenderer;
@property (nonatomic) HTSGLContext htsGLContext;
@property (nonatomic) NSString route;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hdr2sdrFramebuffer;
- (id)htsGLContext;
- (BOOL)processSampleData:;
- (void)setHdr2sdrFramebuffer:;
- (void)setHtsGLContext:;
- (void)setTextureMvpRenderer:;
- (id)textureMvpRenderer;
- (id)transHDR2SDRProcess:;
- (void)setRoute:;
- (id)route;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
