@interface ADEspressoJasperColorInferenceDescriptor : ADEspressoInferenceDescriptor
@property (nonatomic) ADEspressoImageDescriptor colorInput;
@property (nonatomic) ADEspressoImageDescriptor jasperInput;
@property (nonatomic) ADEspressoImageDescriptor depthOutput;
@property (nonatomic) ADEspressoImageDescriptor confidenceOutput;
@property (nonatomic) ADEspressoImageDescriptor alphaMapOutput;
@property (nonatomic) ADEspressoImageDescriptor normalsOutput;
- (void).cxx_destruct;
- (id)depthOutput;
- (id)colorInput;
- (id)alphaMapOutput;
- (id)jasperInput;
- (id)confidenceOutput;
- (id)initWithNetworkProvider:;
- (id)normalsOutput;
@end
