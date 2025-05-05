@interface CIQRCodeFeature : CIFeature
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) {CGPoint=dd} topLeft;
@property (nonatomic) {CGPoint=dd} topRight;
@property (nonatomic) {CGPoint=dd} bottomLeft;
@property (nonatomic) {CGPoint=dd} bottomRight;
@property (nonatomic) NSString messageString;
@property (nonatomic) CIQRCodeDescriptor symbolDescriptor;
- (void)dealloc;
- (id)initWithCoder:;
- (id)topLeft;
- (void)encodeWithCoder:;
- (id)type;
- (id)topRight;
- (id)bottomLeft;
- (id)bottomRight;
- (id)bounds;
- (id)copyWithZone:;
- (id)initWithInternalRepresentation:;
- (id)messageString;
- (id)symbolDescriptor;
+ (BOOL)supportsSecureCoding;
+ (id)featureWithInternalRepresentation:;
@end
