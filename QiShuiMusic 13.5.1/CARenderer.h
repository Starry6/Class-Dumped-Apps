@interface CARenderer : NSObject
@property (nonatomic) CAContext context;
@property (nonatomic) <CARendererDelegate> delegate;
@property (nonatomic) CALayer layer;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
- (void)setDestination:;
- (id)_initWithOptions:;
- (void)setLayer:;
- (void)dealloc;
- (id)context;
- (void)setDelegate:;
- (id)layer;
- (id)delegate;
- (void)setBounds:;
- (void)endFrame;
- (id)updateBounds;
- (id)bounds;
- (void)setContext:;
- (id)_initWithMTLTexture:options:;
- (id)_initWithEAGLContext:options:;
- (void)beginFrameAtTime:timeStamp:;
- (void)addUpdateRect:;
- (double)nextFrameTime;
- (BOOL)hasMissingContent;
- (void)render;
+ (id)rendererWithMTLTexture:options:;
+ (id)rendererWithEAGLContext:options:;
@end
