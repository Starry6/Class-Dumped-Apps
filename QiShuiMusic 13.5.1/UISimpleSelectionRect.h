@interface UISimpleSelectionRect : UITextSelectionRect
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} rect;
- (id)rect;
- (void)setRect:;
+ (id)rectWithCGRect:;
@end
