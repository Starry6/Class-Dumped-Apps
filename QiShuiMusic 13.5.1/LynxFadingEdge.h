@interface LynxFadingEdge : NSObject
@property (nonatomic) CAGradientLayer fadingEdgeLayer;
@property (nonatomic) double size;
@property (nonatomic) BOOL horizontal;
- (id)fadingEdgeLayer;
- (void)setFadingEdgeLayer:;
- (void).cxx_destruct;
- (void)setSize:;
- (double)size;
- (BOOL)horizontal;
- (void)setHorizontal:;
+ (void)swizzle:instanceMethod:with:;
@end
