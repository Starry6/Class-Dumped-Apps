@interface ADEspressoJasperToColorTransformCorrectionFrontendInfrerenceDescriptor : ADEspressoInferenceDescriptor
@property (nonatomic) ADEspressoImageDescriptor featuresInput;
@property (nonatomic) ADEspressoImageDescriptor anglesOutput;
@property (nonatomic) ADEspressoImageDescriptor errorsOutput;
- (void).cxx_destruct;
- (id)initWithNetworkProvider:;
- (id)featuresInput;
- (id)anglesOutput;
- (id)errorsOutput;
@end
