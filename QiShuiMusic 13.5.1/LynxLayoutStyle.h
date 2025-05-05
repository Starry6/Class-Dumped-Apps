@interface LynxLayoutStyle : NSObject
@property (nonatomic) q sign;
- (id)initWithSign:layoutNodeManager:;
- (double)computedHeight;
- (double)computedMarginBottom;
- (double)computedMarginLeft;
- (double)computedMarginRight;
- (double)computedMarginTop;
- (double)computedPaddingBottom;
- (double)computedPaddingLeft;
- (double)computedPaddingRight;
- (double)computedPaddingTop;
- (double)computedWidth;
- (long long)flexDirection;
- (long long)sign;
@end
