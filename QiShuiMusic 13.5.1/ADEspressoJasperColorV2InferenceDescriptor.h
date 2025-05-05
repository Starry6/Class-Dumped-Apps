@interface ADEspressoJasperColorV2InferenceDescriptor : ADEspressoInferenceDescriptor
@property (nonatomic) ADEspressoImageDescriptor colorInput;
@property (nonatomic) ADEspressoImageDescriptor jasperInput;
@property (nonatomic) ADEspressoImageDescriptor prevDepthInput;
@property (nonatomic) ADEspressoImageDescriptor prevColorInput;
@property (nonatomic) ADEspressoImageDescriptor prevUncertaintyInput;
@property (nonatomic) ADEspressoImageDescriptor depthOutput;
@property (nonatomic) ADEspressoImageDescriptor uncertaintyOutput;
- (void).cxx_destruct;
- (id)depthOutput;
- (id)colorInput;
- (id)jasperInput;
- (id)initWithNetworkProvider:espressoEngine:;
- (id)prevDepthInput;
- (id)prevColorInput;
- (id)prevUncertaintyInput;
- (id)uncertaintyOutput;
@end
