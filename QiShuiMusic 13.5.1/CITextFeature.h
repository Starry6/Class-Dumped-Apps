@interface CITextFeature : CIFeature
@property (nonatomic) NSString messageString;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {CGPoint=dd} topLeft;
@property (nonatomic) {CGPoint=dd} topRight;
@property (nonatomic) {CGPoint=dd} bottomLeft;
@property (nonatomic) {CGPoint=dd} bottomRight;
@property (nonatomic) NSArray subFeatures;
- (void)dealloc;
- (id)topLeft;
- (id)type;
- (id)topRight;
- (id)bottomLeft;
- (id)bottomRight;
- (id)bounds;
- (id)messageString;
- (id)initWithBounds:topLeft:topRight:bottomLeft:bottomRight:subFeatures:messageString:;
- (id)subFeatures;
@end
