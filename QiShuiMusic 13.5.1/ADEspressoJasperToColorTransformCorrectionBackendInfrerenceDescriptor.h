@interface ADEspressoJasperToColorTransformCorrectionBackendInfrerenceDescriptor : ADEspressoInferenceDescriptor
@property (nonatomic) ADEspressoImageDescriptor colorInput;
@property (nonatomic) ADEspressoImageDescriptor jasperInput;
@property (nonatomic) ADEspressoImageDescriptor featuresOutput;
- (void).cxx_destruct;
- (id)colorInput;
- (id)featuresOutput;
- (id)jasperInput;
- (id)initWithNetworkProvider:;
@end
