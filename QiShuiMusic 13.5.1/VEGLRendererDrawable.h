@interface VEGLRendererDrawable : NSObject
@property (nonatomic) HTSGLContext context;
@property (nonatomic) UIView glDrawable;
@property (nonatomic) {CGSize=dd} sizeInPixel;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSizeInPixel:;
- (BOOL)bindScreenFBO;
- (void)destoryFBO;
- (id)glDrawable;
- (id)initWithDrawable:context:;
- (void)layoutIfNeed;
- (id)opaquePointer;
- (void)prepareFBO;
- (void)presentScreenFBO;
- (void)setGlDrawable:;
- (id)sizeInPixel;
- (void)dealloc;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (void)setSize:;
- (id)size;
@end
