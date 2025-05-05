@interface MKLayer : CALayer
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} hitBounds;
@property (nonatomic) {CGPoint=dd} hitOffset;
@property (nonatomic) {CGPoint=dd} hitOutset;
- (void)setBounds:;
- (BOOL)containsPoint:;
- (void)setHitOutset:;
- (void)setHitOffset:;
- (id)hitOffset;
- (id)hitOutset;
- (id)hitBounds;
@end
