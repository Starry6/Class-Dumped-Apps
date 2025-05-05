@interface CIRectangleFeature : CIFeature
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {CGPoint=dd} topLeft;
@property (nonatomic) {CGPoint=dd} topRight;
@property (nonatomic) {CGPoint=dd} bottomLeft;
@property (nonatomic) {CGPoint=dd} bottomRight;
- (id)topLeft;
- (id)type;
- (id)topRight;
- (id)bottomLeft;
- (id)bottomRight;
- (id)bounds;
- (id)initWithBounds:topLeft:topRight:bottomLeft:bottomRight:;
@end
