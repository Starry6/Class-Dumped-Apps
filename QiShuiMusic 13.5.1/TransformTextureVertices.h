@interface TransformTextureVertices : NSObject
@property (nonatomic) {CGPoint=dd} topLeft;
@property (nonatomic) {CGPoint=dd} topRight;
@property (nonatomic) {CGPoint=dd} bottomLeft;
@property (nonatomic) {CGPoint=dd} bottomRight;
@property (nonatomic) Q clapRotation;
- (unsigned long long)clapRotation;
- (void)setClapRotation:;
- (id)init;
- (id)topLeft;
- (id)initWithDict:;
- (id)topRight;
- (BOOL)isValid;
- (id)bottomLeft;
- (id)bottomRight;
- (id)copyWithZone:;
- (void)setTopLeft:;
- (void)setTopRight:;
- (void)setBottomRight:;
- (void)setBottomLeft:;
- (id)toDict;
@end
