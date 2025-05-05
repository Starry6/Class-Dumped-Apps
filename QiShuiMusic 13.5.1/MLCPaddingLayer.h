@interface MLCPaddingLayer : MLCLayer
@property (nonatomic) NSInteger paddingType;
@property (nonatomic) Q paddingLeft;
@property (nonatomic) Q paddingRight;
@property (nonatomic) Q paddingTop;
@property (nonatomic) Q paddingBottom;
@property (nonatomic) float constantValue;
- (float)constantValue;
- (unsigned long long)paddingBottom;
- (unsigned long long)paddingRight;
- (unsigned long long)paddingTop;
- (id)description;
- (unsigned long long)paddingLeft;
- (id)copyWithZone:;
- (BOOL)compileForDevice:sourceTensors:resultTensor:;
- (id)summarizedDOTDescription;
- (BOOL)isSupportedShapeForTensorSources:;
- (id)resultTensorFromSources:;
- (unsigned long long)resultSizeFromSourceSize:dimension:;
- (id)initWithPaddingType:paddingSizes:constantValue:;
- (int)paddingType;
+ (BOOL)supportsDataType:onDevice:;
+ (id)layerWithReflectionPadding:;
+ (id)layerWithSymmetricPadding:;
+ (id)layerWithZeroPadding:;
+ (id)layerWithConstantPadding:constantValue:;
@end
