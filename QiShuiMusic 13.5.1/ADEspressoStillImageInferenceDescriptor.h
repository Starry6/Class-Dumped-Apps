@interface ADEspressoStillImageInferenceDescriptor : ADEspressoInferenceDescriptor
@property (nonatomic) ADEspressoImageDescriptor colorInput;
@property (nonatomic) ADEspressoImageDescriptor jasperInput;
@property (nonatomic) ADEspressoImageDescriptor depthOutput;
- (void).cxx_destruct;
- (id)depthOutput;
- (id)colorInput;
- (id)jasperInput;
- (id)initWithNetworkProvider:;
@end
