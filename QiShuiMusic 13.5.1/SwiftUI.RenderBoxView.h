@interface SwiftUI.RenderBoxView : SwiftUI._UIGraphicsView
@property (nonatomic) BOOL opaque;
- (void)dealloc;
- (id)initWithCoder:;
- (BOOL)isOpaque;
- (id)initWithFrame:;
- (void)setNeedsDisplay;
- (void)RBLayer:draw:;
- (void)didMoveToWindow;
- (void)setOpaque:;
+ (Class)layerClass;
@end
