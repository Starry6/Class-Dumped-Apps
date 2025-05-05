@interface VEAlgorithmInput : NSObject
@property (nonatomic) VEAlgorithmInputData inputData;
@property (nonatomic) VEAlgorithmInputMVMoment mvMomentInput;
@property (nonatomic) VEAlgorithmInputMomentAIM momentAIMInput;
@property (nonatomic) VEAlgorithmInputMomentTIM momentTIMInput;
- (id)momentAIMInput;
- (id)momentTIMInput;
- (id)mvMomentInput;
- (void)setMomentAIMInput:;
- (void)setMomentTIMInput:;
- (void)setMvMomentInput:;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:;
@end
