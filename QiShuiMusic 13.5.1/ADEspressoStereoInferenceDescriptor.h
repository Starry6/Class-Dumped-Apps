@interface ADEspressoStereoInferenceDescriptor : ADEspressoInferenceDescriptor
@property (nonatomic) ADEspressoImageDescriptor referenceInput;
@property (nonatomic) ADEspressoImageDescriptor auxiliaryInput;
@property (nonatomic) ADEspressoImageDescriptor referenceNoiseSigmaInput;
@property (nonatomic) ADEspressoImageDescriptor auxiliaryNoiseSigmaInput;
@property (nonatomic) ADEspressoImageDescriptor disparityOutput;
- (void).cxx_destruct;
- (id)auxiliaryInput;
- (id)referenceInput;
- (id)disparityOutput;
- (id)initWithNetworkProvider:inputColorFormat:outputDisparityFormat:;
- (id)referenceNoiseSigmaInput;
- (id)auxiliaryNoiseSigmaInput;
@end
