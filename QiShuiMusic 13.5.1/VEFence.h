@interface VEFence : NSObject
@property (nonatomic) HTSGLContext context;
@property (nonatomic) BOOL enableAgfxContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enableAgfxContext;
- (void)fenceSync;
- (void)setEnableAgfxContext:;
- (void)waitSync;
- (void)dealloc;
- (id)context;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setContext:;
@end
