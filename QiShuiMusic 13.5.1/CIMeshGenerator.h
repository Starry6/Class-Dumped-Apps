@interface CIMeshGenerator : CIFilter
@property (nonatomic) NSNumber inputWidth;
@property (nonatomic) CIColor inputColor;
@property (nonatomic) NSArray inputMesh;
- (id)outputImage;
- (id)inputWidth;
- (void)setInputWidth:;
- (id)inputColor;
- (void)setInputColor:;
- (id)_CIMesh1;
- (id)_CIMesh2;
- (id)_CIMesh4;
- (id)_CIMesh8;
- (id)_CIMesh16;
- (id)_CIMesh32;
- (id)extentOfMeshStart:count:halfWidth:;
- (id)inputMesh;
- (void)setInputMesh:;
+ (id)customAttributes;
@end
