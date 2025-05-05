@interface BDASplashMaterialVideoView : BDASplashBaseVideoView
@property (nonatomic) BDASplashMaterialViewModel materialModel;
@property (nonatomic) Q srErrorCode;
- (void)setSRLongLower:;
- (void)setSRLongUpper:;
- (void)setSrErrorCode:;
- (void)configSROption;
- (BOOL)enableNNSR;
- (id)initWithFrame:materialModel:;
- (BOOL)isLowBattery:;
- (id)materialModel;
- (void)setEnableVideo15SR:;
- (void)setMaterialModel:;
- (void)setSRShortLower:;
- (void)setSRShortUpper:;
- (void)setupVideoEngine;
- (unsigned long long)srErrorCode;
- (void)dealloc;
- (void).cxx_destruct;
@end
