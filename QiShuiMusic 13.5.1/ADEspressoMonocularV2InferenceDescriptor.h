@interface ADEspressoMonocularV2InferenceDescriptor : ADEspressoInferenceDescriptor
@property (nonatomic) ADEspressoImageDescriptor colorInput;
@property (nonatomic) ADEspressoImageDescriptor prevDisparityInput;
@property (nonatomic) ADEspressoImageDescriptor disparityOutput;
- (void).cxx_destruct;
- (id)colorInput;
- (id)prevDisparityInput;
- (id)disparityOutput;
- (id)initWithNetworkProvider:inputColorFormat:disparityFormat:;
@end
