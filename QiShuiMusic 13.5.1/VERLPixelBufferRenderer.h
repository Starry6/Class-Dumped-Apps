@interface VERLPixelBufferRenderer : VERLBaseRenderer
@property (nonatomic) ^v renderer;
@property (nonatomic) BOOL isFullRange;
- (void)setIsFullRange:;
- (void)deInit;
- (void)render:config:;
- (void)syncTransformValues;
- (id)renderer;
- (void)dealloc;
- (id)initWithContext:;
- (BOOL)isFullRange;
@end
