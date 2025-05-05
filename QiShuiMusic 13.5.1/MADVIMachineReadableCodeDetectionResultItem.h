@interface MADVIMachineReadableCodeDetectionResultItem : NSObject
@property (nonatomic) {CGPoint=dd} topLeft;
@property (nonatomic) {CGPoint=dd} topRight;
@property (nonatomic) {CGPoint=dd} bottomLeft;
@property (nonatomic) {CGPoint=dd} bottomRight;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedBoundingBox;
@property (nonatomic) NSString symbology;
@property (nonatomic) NSString payload;
@property (nonatomic) CIBarcodeDescriptor descriptor;
- (id)payload;
- (id)descriptor;
- (id)initWithCoder:;
- (id)topLeft;
- (void)encodeWithCoder:;
- (id)topRight;
- (void).cxx_destruct;
- (id)bottomLeft;
- (id)description;
- (id)bottomRight;
- (id)symbology;
- (id)normalizedBoundingBox;
- (id)initWithTopLeft:topRight:bottomLeft:bottomRight:symbology:payload:andDescriptor:;
+ (BOOL)supportsSecureCoding;
@end
