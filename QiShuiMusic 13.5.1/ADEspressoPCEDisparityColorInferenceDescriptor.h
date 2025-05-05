@interface ADEspressoPCEDisparityColorInferenceDescriptor : ADEspressoInferenceDescriptor
@property (nonatomic) ADEspressoImageDescriptor colorInput;
@property (nonatomic) ADEspressoImageDescriptor disparityInput;
@property (nonatomic) ADEspressoImageDescriptor prevDisparityInput;
@property (nonatomic) ADEspressoImageDescriptor prevFeaturesInput;
@property (nonatomic) ADEspressoImageDescriptor disparityOutput;
@property (nonatomic) ADEspressoImageDescriptor featuresOutput;
- (void).cxx_destruct;
- (id)disparityInput;
- (id)colorInput;
- (id)prevFeaturesInput;
- (id)prevDisparityInput;
- (id)featuresOutput;
- (id)disparityOutput;
- (id)initWithNetworkProvider:inputColorFormat:disparityFormat:;
@end
