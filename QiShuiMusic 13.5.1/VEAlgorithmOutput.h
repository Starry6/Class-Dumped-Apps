@interface VEAlgorithmOutput : NSObject
@property (nonatomic) VEAlgorithmOutputImage imgMomentOutput;
@property (nonatomic) VEAlgorithmOutputMVMoment mvMomentOutput;
@property (nonatomic) VEAlgorithmOutputMomentAIM momentAIMOutput;
@property (nonatomic) VEAlgorithmOutputMomentTIM momentTIMOutput;
- (id)momentAIMOutput;
- (id)imgMomentOutput;
- (id)momentTIMOutput;
- (id)mvMomentOutput;
- (void)setImgMomentOutput:;
- (void)setMomentAIMOutput:;
- (void)setMomentTIMOutput:;
- (void)setMvMomentOutput:;
- (void).cxx_destruct;
@end
