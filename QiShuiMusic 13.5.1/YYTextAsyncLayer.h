@interface YYTextAsyncLayer : CALayer
@property (nonatomic) BOOL displaysAsynchronously;
- (void)_cancelAsyncDisplay;
- (void)_displayAsync:;
- (BOOL)displaysAsynchronously;
- (void)setDisplaysAsynchronously:;
- (id)init;
- (void)dealloc;
- (void)display;
- (void)setNeedsDisplay;
- (void).cxx_destruct;
+ (id)defaultValueForKey:;
@end
