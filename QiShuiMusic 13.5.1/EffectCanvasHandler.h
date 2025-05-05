@interface EffectCanvasHandler : NSObject
@property (nonatomic) ^v handler;
@property (nonatomic) ^v engine;
@property (nonatomic) HTSGLContext context;
- (void)checkEffectError:msg:;
- (id)engine;
- (void)setEngine:;
- (void)dealloc;
- (id)context;
- (void)setHandler:;
- (id)initWithEngine:;
- (id)handler;
- (void).cxx_destruct;
- (void)setContext:;
@end
