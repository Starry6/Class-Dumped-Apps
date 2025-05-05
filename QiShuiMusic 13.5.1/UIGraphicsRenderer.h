@interface UIGraphicsRenderer : NSObject
@property (nonatomic) UIGraphicsRendererFormat format;
@property (nonatomic) BOOL allowsImageOutput;
- (id)init;
- (void)_prepareContextForReuse:;
- (id)format;
- (BOOL)runDrawingActions:completionActions:error:;
- (void)popContext:;
- (void)_enqueueContextForReuse:;
- (id)initWithFormat:bounds:;
- (BOOL)runDrawingActions:completionActions:format:error:;
- (id)initWithBounds:format:;
- (void)_configureReuseState;
- (id)initWithBounds:;
- (id)_dequeueContextForReuse;
- (void).cxx_destruct;
- (void)pushContext:;
- (BOOL)allowsImageOutput;
+ (void)prepareCGContext:withRendererContext:;
+ (Class)rendererContextClass;
+ (id)contextWithFormat:;
+ (id)_contextWithFormat:renderer:;
+ (void)_destroyCGContext:withRenderer:;
+ (BOOL)_supportsContextReuse;
@end
