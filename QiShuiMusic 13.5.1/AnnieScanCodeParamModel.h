@interface AnnieScanCodeParamModel : IESLiveBridgeModel
@property (nonatomic) BOOL isDisableAutoJump;
@property (nonatomic) BOOL cameraOnly;
- (BOOL)cameraOnly;
- (BOOL)isDisableAutoJump;
- (void)setCameraOnly:;
- (void)setIsDisableAutoJump:;
- (id)init;
@end
