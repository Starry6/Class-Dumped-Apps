@interface BDXBridgeScanCodeMethodParamModel : BDXBridgeModel
@property (nonatomic) BOOL cameraOnly;
@property (nonatomic) NSNumber autoJump;
@property (nonatomic) BOOL enableAnalysis;
- (id)autoJump;
- (BOOL)cameraOnly;
- (void)setAutoJump:;
- (void)setCameraOnly:;
- (void).cxx_destruct;
- (BOOL)enableAnalysis;
- (void)setEnableAnalysis:;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
@end
