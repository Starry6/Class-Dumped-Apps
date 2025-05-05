@interface WKTextPosition : UITextPosition
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} positionRect;
- (id)description;
- (BOOL)isEqual:;
- (id)positionRect;
- (void)setPositionRect:;
+ (id)textPositionWithRect:;
@end
